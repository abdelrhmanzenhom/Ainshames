from sklearn.feature_selection import RFECV, SelectKBest, chi2
from sklearn.feature_selection import RFE, RFECV, SelectKBest
from sklearn.metrics import mean_squared_error
from sklearn.model_selection import train_test_split, StratifiedKFold
from sklearn import linear_model, metrics
from sklearn.preprocessing import PolynomialFeatures, LabelEncoder, StandardScaler
import numpy as np
import pandas as pd
from matplotlib import pyplot as plt
from sklearn.linear_model import LogisticRegression
import time
from sklearn.ensemble import RandomForestClassifier
from sklearn.naive_bayes import GaussianNB
from sklearn.tree import DecisionTreeClassifier
import pickle
########################################################################################################################


class LogisticRegressionModel:

    def __init__(self,solver,penalty,max_iter, C):
        self.model = LogisticRegression(solver=solver,penalty=penalty,max_iter=max_iter,C=C)

    def fit(self, X_train, y_train):
        self.model.fit(X_train, y_train)

    def predict(self, X_test):
        return self.model.predict(X_test)



class RandomForestModel:

    def __init__(self,n_estimators, max_depth, random_state):
        self.model = RandomForestClassifier(n_estimators=n_estimators, max_depth=max_depth, random_state=random_state)

    def fit(self, X_train, y_train):
        self.model.fit(X_train, y_train)

    def predict(self, X_test):
        return self.model.predict(X_test)


class GaussianNBModel:

    def __init__(self):
        self.model = GaussianNB()

    def fit(self, X_train, y_train):
        self.model.fit(X_train, y_train)

    def predict(self, X_test):
        return self.model.predict(X_test)


class DecisionTreeModel:

    def __init__(self,max_depth, min_samples_split, min_samples_leaf):
        self.model = DecisionTreeClassifier(max_depth=max_depth, min_samples_split=min_samples_split, min_samples_leaf=min_samples_leaf)

    def fit(self, X_train, y_train):
        self.model.fit(X_train, y_train)

    def predict(self, X_test):
        return self.model.predict(X_test)

def Pre_processing(x_train,Y_train):

   # df_num = data.select_dtypes(include = ['float64', 'int64'])
   # df_num.hist(figsize=(16, 20), bins=50, xlabelsize=8, ylabelsize=8)
    x_train['Hotel_Address'] = (x_train['Hotel_Address'].str.split(' ').str[-1]).str.lower()

    x_train['days_since_review'] = (x_train['days_since_review'].str.split(' ',1).str[0]).astype(int)

    x_train["Review_Date"] = pd.to_datetime(x_train["Review_Date"], dayfirst=True)

    x_train["Review_Date"]=x_train["Review_Date"].dt.month

    x_train['Tags'] =( x_train['Tags'].str.contains(' Leisure trip')).astype(int)


    #x_train['Tags'] = (x_train['Tags'].str.contains('')).astype(int)


   #x_train['Tags'] = (x_train['Tags'].str.contains(' Leisure trip')).astype(int)


    List = ['Nothing', 'nothing','No Negative']
    x_train['Negative_Review'] = x_train['Negative_Review'].apply(lambda x: any(item.lower() in x.lower() for item in List))
    List1 = ['No Positive']
    x_train['Positive_Review'] = x_train['Positive_Review'].apply(lambda x: any(item.lower() in x.lower() for item in List1))

    cols=('Reviewer_Nationality','Hotel_Name','Hotel_Address','Tags','Positive_Review','Negative_Review')



    def Feature_Enconder(X, cols):
        for c in cols:
            lbl = LabelEncoder()
            lbl.fit(list(X[c].values))
            X[c] = lbl.transform(list(X[c].values))
        return X



    x_train=Feature_Enconder(x_train,cols)
    Y_train = LabelEncoder().fit_transform(Y_train)
    x_train = x_train.fillna(x_train.mean())

    scaler = StandardScaler()
    x_train = scaler.fit_transform(x_train)

    return x_train,Y_train

choise=input("enter 1 to train 2 to test")
if choise=='1':

    data = pd.read_csv('E:\ml\Project Materials\Datasets\Milestone2\hotel-classification-dataset.csv')
    Y = data['Reviewer_Score']
    X = data.iloc[:,0:16]
    X_train, X_test, y_train, y_test = train_test_split(X, Y, test_size = 0.20,shuffle=True,random_state=10)
    X_train,y_train=Pre_processing(X_train,y_train)
    X_test,y_test=Pre_processing(X_test,y_test)
    #
    # rfe = RFE(lr, n_features_to_select=7)
    #
    # rfe.fit(X_train,y_train)
    #
    # X_train = rfe.transform(X_train)
    # selected_features = X.columns[rfe.support_]
    # X_test =np.delete(X_test,
    #     [0, 1, 2,
    #      4, 5,
    #      8, 15,14,13], axis=1)
    # selector = SelectKBest(chi2, k=7)
    # X_train_selected = selector.fit_transform(X_train, y_train)
    # X_test_selected = selector.transform(X_test)

    lr = LogisticRegression(max_iter=1000)
    rfecv = RFECV(estimator=lr, cv=StratifiedKFold(), scoring='accuracy',step=1)
    rfecv.fit(X_train, y_train)
    X_train = rfecv.transform(X_train)
    X_test = rfecv.transform(X_test)


    selected_feature_indices = rfecv.support_
    selected_features = X.columns[selected_feature_indices]
    print("Feature Rankings:")
    for feature_ranking in zip(X.columns, rfecv.ranking_):
        print(f"{feature_ranking[0]}: {feature_ranking[1]}")
    print(selected_features)

    print(X_train.shape)
    X_train = np.delete(X_train,
                      [9,10], axis=1)
    X_test = np.delete(X_test,
                        [9, 10], axis=1)
    print(X_train.shape)
    print(X_test.shape)

    accuracy_scores=[]


    def evaluation(y_pred,y_test):
        acc = metrics.accuracy_score(y_test, y_pred)
        cnf_matrix = metrics.confusion_matrix(y_test, y_pred)
        mse = mean_squared_error(y_test,y_pred)
        accuracy_scores.append(acc)
        print('accuracy')
        print(acc)
        print('Mean squared error')
        print(mse)
        print('confusion matrix')
        print(cnf_matrix)


    clf = [
        LogisticRegressionModel(solver='newton-cg',penalty='l2',max_iter=30000, C=0.01),
        LogisticRegressionModel(solver='lbfgs',penalty='l2',max_iter=30000, C=0.01),
        LogisticRegressionModel(solver='sag',penalty='l2',max_iter=30000, C=0.01),
        LogisticRegressionModel(solver='saga',penalty='l2',max_iter=30000, C=0.01),
        LogisticRegressionModel(solver='newton-cg',penalty='l2',max_iter=30000, C=1),
        LogisticRegressionModel(solver='lbfgs',penalty='l2',max_iter=30000, C=1),
        LogisticRegressionModel(solver='sag',penalty='l2',max_iter=30000, C=1),
        LogisticRegressionModel(solver='saga',penalty='l2',max_iter=30000, C=1),
        LogisticRegressionModel(solver='newton-cg',penalty='l2',max_iter=30000, C=10),
        LogisticRegressionModel(solver='lbfgs',penalty='l2',max_iter=30000, C=10),
        LogisticRegressionModel(solver='sag',penalty='l2',max_iter=30000, C=10),
        LogisticRegressionModel(solver='saga',penalty='l2',max_iter=30000, C=10)
            ]
    yy = [
         #RandomForestModel(n_estimators=700, max_depth=20, random_state=42),
         RandomForestModel(n_estimators=100, max_depth=10, random_state=42),
         RandomForestModel(n_estimators=100, max_depth=5, random_state=42),
         RandomForestModel(n_estimators=100, max_depth=15, random_state=42),
         RandomForestModel(n_estimators=200, max_depth=10, random_state=42),
         RandomForestModel(n_estimators=200, max_depth=5, random_state=42),
         RandomForestModel(n_estimators=200, max_depth=15, random_state=42),
         RandomForestModel(n_estimators=300, max_depth=10, random_state=42),
         RandomForestModel(n_estimators=300, max_depth=5, random_state=42),
         RandomForestModel(n_estimators=300, max_depth=15, random_state=42)
    ]

    all_accurcy=[]
    all_scores=[]
    best_acc=-1
    indexx=-1
    ii=0
    for l in clf:
        l.fit(X_train, y_train)
        score = metrics.accuracy_score(y_train, l.predict(X_train))
        all_scores.append(score)
        y_pred = l.predict(X_test)
        acc = metrics.accuracy_score(y_test, y_pred)

        all_accurcy.append(acc)
        if best_acc<acc:
            indexx=ii
            best_acc=acc
        ii+=1


    print(all_accurcy)
    print(all_accurcy[indexx])
    print(all_scores)
    all_accurcy2=[]
    all_scores2=[]
    best_acc=-1
    indexx2=-1
    iii=0
    for alg in yy:
        alg.fit(X_train, y_train)
        score = metrics.accuracy_score(y_train, alg.predict(X_train))
        all_scores2.append(score)
        y_pred = alg.predict(X_test)
        acc = metrics.accuracy_score(y_test, y_pred)

        all_accurcy2.append(acc)
        if best_acc<acc:
            indexx2=iii
            best_acc=acc
        iii+=1

    print(all_accurcy2)
    print(all_accurcy2[indexx2])
    print(all_scores2)


    train_start_time = time.time()
    tree=DecisionTreeModel(max_depth=5, min_samples_split=10, min_samples_leaf=5)
    tree.fit(X_train,y_train)
    train_end_time = time.time()
    test_start_time = time.time()
    y_pred=tree.predict(X_test)
    test_end_time = time.time()
    training_time = train_end_time - train_start_time
    testing_time = test_end_time - test_start_time
    evaluation(y_pred,y_test)


    l=clf[indexx]
    train_start_time = time.time()
    l.fit(X_train,y_train)
    train_end_time = time.time()
    test_start_time = time.time()
    y_pred=l.predict(X_test)
    test_end_time = time.time()
    training_time2 = train_end_time - train_start_time
    testing_time2 = test_end_time - test_start_time
    evaluation(y_pred,y_test)


    RF=yy[indexx2]
    train_start_time = time.time()
    RF.fit(X_train,y_train)
    train_end_time = time.time()
    test_start_time = time.time()
    y_pred=RF.predict(X_test)
    test_end_time = time.time()
    training_time3 = train_end_time - train_start_time
    testing_time3 = test_end_time - test_start_time
    evaluation(y_pred,y_test)


    NB=GaussianNBModel()
    train_start_time = time.time()
    NB.fit(X_train,y_train)
    train_end_time = time.time()
    test_start_time = time.time()
    y_pred=NB.predict(X_test)
    test_end_time = time.time()
    training_time4 = train_end_time - train_start_time
    testing_time4 = test_end_time - test_start_time
    evaluation(y_pred,y_test)
    print('the predection= ',y_pred)
    print('the real ones= ',y_test)


    models = ['desion_tree', 'Logistic','random_forest','NB']
    test_times = [testing_time, testing_time2,testing_time3,testing_time4]
    fig, ax = plt.subplots(figsize=(8, 6))
    ax2 = ax.twinx()
    ax2.bar(models, test_times, color='green', alpha=0.5, label='Test Time')
    ax2.set_ylabel('Test Time (seconds)')
    ax.set_xlabel('Model')
    ax2.legend(loc='upper right')
    plt.title('Model Comparison')
    plt.show()


    train_times = [training_time, training_time2,training_time3,training_time4]
    fig, ax = plt.subplots(figsize=(8, 6))
    ax2 = ax.twinx()
    ax2.bar(models, train_times, color='green', alpha=0.5, label='Train Time')
    ax2.set_ylabel('Train Time (seconds)')
    ax.set_xlabel('Model')
    ax2.legend(loc='upper right')
    plt.title('Model Comparison')
    plt.show()


    plt.bar(models, accuracy_scores)
    plt.title('Accuracy Scores of Three Models')
    plt.xlabel('Models')
    plt.ylabel('Accuracy')
    plt.show()


    with open('decision_tree_model.pkl', 'wb') as f:
        pickle.dump(tree, f)

    with open('logistic_regression_model.pkl', 'wb') as f:
        pickle.dump(l, f)


    with open('random_forest_model.pkl', 'wb') as f:
        pickle.dump(RF, f)


    with open('gaussian_nb_model.pkl', 'wb') as f:
        pickle.dump(NB, f)
else:
    path=input("enter the path ")
    the_data = pd.read_csv(path)
    Y = the_data['Reviewer_Score']
    X2 = the_data.iloc[:, 0:16]

    X_new,Y_new=Pre_processing(X2,Y)

    print(X_new.shape)

    X_new= np.delete(X_new,[1,4,8,12,13,14,15], axis=1)
    print(X_new.shape)



    with open('decision_tree_model.pkl', 'rb') as f:
        decision_tree_model = pickle.load(f)

    # Load the Logistic Regression model
    with open('logistic_regression_model.pkl', 'rb') as f:
        logistic_regression_model = pickle.load(f)

    # Load the Random Forest model
    with open('random_forest_model.pkl', 'rb') as f:
        random_forest_model = pickle.load(f)

    # Load the Gaussian Naive Bayes model
    with open('gaussian_nb_model.pkl', 'rb') as f:
        gaussian_nb_model = pickle.load(f)
    accuracy_scores = []

    decision_tree_predictions = decision_tree_model.predict(X_new)


    acc = metrics.accuracy_score(Y_new, decision_tree_predictions)
    print("Decision tree model accurcy")
    print(acc)
    accuracy_scores.append(acc)

    # For Logistic Regression
    logistic_regression_predictions = logistic_regression_model.predict(X_new)

    acc = metrics.accuracy_score(Y_new, decision_tree_predictions)
    print("Logistic regression model accurcy")
    print(acc)
    accuracy_scores.append(acc)
    # For Random Forest
    random_forest_predictions = random_forest_model.predict(X_new)


    acc = metrics.accuracy_score(Y_new, random_forest_predictions)
    print("Random forest model accurcy")
    print(acc)
    accuracy_scores.append(acc)

    # For Gaussian Naive Bayes
    gaussian_nb_predictions = gaussian_nb_model.predict(X_new)

    acc = metrics.accuracy_score(Y_new, gaussian_nb_predictions)
    print("Gaussian model accurcy")
    print(acc)
    accuracy_scores.append(acc)
    models = ['desion_tree', 'Logistic', 'random_forest', 'NB']
    plt.bar(models, accuracy_scores)
    plt.title('Accuracy Scores of Three Models')
    plt.xlabel('Models')
    plt.ylabel('Accuracy')
    plt.show()