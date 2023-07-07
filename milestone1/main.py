import seaborn as sns
from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_percentage_error
from sklearn.model_selection import train_test_split
from sklearn import linear_model, metrics
from sklearn.preprocessing import PolynomialFeatures, LabelEncoder, MinMaxScaler
from sklearn.ensemble import VotingRegressor
import numpy as np
import pandas as pd
from matplotlib import pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.ensemble import  RandomForestRegressor
from sklearn.svm import  SVR
from sklearn.neural_network import  MLPRegressor
import pickle

class RandomForestRegressorModel:
    def init(self):
        self.model = None

    def train(self, X, y):
        self.model = RandomForestRegressor(n_estimators=100, max_depth=10, random_state=42)
        self.model.fit(X, y)

    def predict(self, X):
        return self.model.predict(X)
    def MSE (self,X,Y):
        return self.mean_squared_error(X, Y)

    def plot_predicted_vs_true(self,X_train, y_train):
        # Get the predicted values for the training data
        y_pred_train = self.predict(X_train)

        # Plot the predicted values against each feature
        fig, axs = plt.subplots(nrows=X_train.shape[1], figsize=(6, 40))
        for i, feature in enumerate(X_train.columns):
            axs[i].scatter(X_train[feature], y_train, label='True')
            axs[i].scatter(X_train[feature], y_pred_train, label='Predicted')
            axs[i].set_xlabel(feature)
            axs[i].set_ylabel('MEDV')
            axs[i].legend()
        plt.show()



class LinearRegressionModel:
    def __init__(self):
        self.model = LinearRegression()

    def train(self, X, y):
        self.model.fit(X, y)

    def predict(self, X):
        return self.model.predict(X)




class NeuralNetworkRegressorModel:
    def __init__(self):
        self.model = MLPRegressor()

    def train(self, X, y):
        self.model.fit(X, y)

    def predict(self, X):
        return self.model.predict(X)



class SVMRegressorModel:
    def __init__(self):
        self.model = SVR()

    def train(self, X, y):
        self.model.fit(X, y)

    def predict(self, X):
        return self.model.predict(X)
########################################################################################################################

def preprocess1(data):
    data.fillna(0, inplace=True)
    data.replace([np.inf, -np.inf], np.nan, inplace=True)
    data.dropna(inplace=True)

    data['Hotel_Address'] = (data['Hotel_Address'].str.split(' ').str[-1]).str.lower()

    data['days_since_review'] = (data['days_since_review'].str.split(' ',1).str[0]).astype(int)

    data["Review_Date"] = pd.to_datetime(data["Review_Date"], dayfirst=True)

    data["Review_Date"]=data["Review_Date"].dt.month

    data['Tags'] =( data['Tags'].str.contains(' Leisure trip')).astype(int)

    List = ['Nothing', 'nothing','No Negative']
    data['Negative_Review'] = data['Negative_Review'].apply(lambda x: any(item.lower() in x.lower() for item in List))
    List1 = ['No Positive']
    data['Positive_Review'] = data['Positive_Review'].apply(lambda x: any(item.lower() in x.lower() for item in (List1)))

    cols=('Reviewer_Nationality','Hotel_Name','Hotel_Address','Tags','Positive_Review','Negative_Review')


    def Feature_Enconder(X, cols):
        for c in cols:
            lbl = LabelEncoder()
            lbl.fit(list(X[c].values))
            X[c] = lbl.transform(list(X[c].values))
        return X
    data=Feature_Enconder(data,cols)
    means = data.mean()
    stds = data.std()
    normalized_data = (data - means) / stds

    data = normalized_data
    correlation_matrix = data.corr()
    fig, ax = plt.subplots(figsize=(15, 15))
    im = ax.imshow(correlation_matrix, cmap='coolwarm')

    ax.set_xticks(np.arange(len(correlation_matrix.columns)))
    ax.set_yticks(np.arange(len(correlation_matrix.columns)))
    ax.set_xticklabels(correlation_matrix.columns)
    ax.set_yticklabels(correlation_matrix.columns)
    plt.setp(ax.get_xticklabels(), rotation=45, ha="right",
             rotation_mode="anchor")
    for i in range(len(correlation_matrix.columns)):
        for j in range(len(correlation_matrix.columns)):
            text = ax.text(j, i, round(correlation_matrix.iloc[i, j], 2),
                           ha="center", va="center", color="black")

    ax.set_title("Correlation matrix heatmap")
    fig.tight_layout()
    # plt.show()

    top_feature = correlation_matrix.index[abs(correlation_matrix['Reviewer_Score']) > 0.2]
    plt.subplots(figsize=(8, 8))
    top_corr = data[top_feature].corr()
    sns.heatmap(top_corr, annot=True)
    # plt.show()
    top_feature = top_feature.delete(-1)

    X = data[top_feature]


    return X


#scaler = MinMaxScaler()
#X_scaled = scaler.fit_transform(X)

choise=input("enter 1 to train 2 to test")
if choise=='1':

    data = pd.read_csv('E:\ml\Project Materials\Datasets\Milestone1\hotel-regression-dataset.csv')

    df_num = data.select_dtypes(include=['float64', 'int64'])
    df_num.hist(figsize=(16, 20), bins=50, xlabelsize=8, ylabelsize=8)

    Y = data['Reviewer_Score']

    X = data.iloc[:, 0:17]
    X_train, X_test, y_train, y_test = train_test_split(X, Y, test_size=0.20, shuffle=True, random_state=10)


    X_train=preprocess1(X_train)
    X_train, X_val, y_train, y_val = train_test_split(X_train, y_train, test_size=0.10, shuffle=True, random_state=42)

    X_test=preprocess1(X_test)

    li = LinearRegressionModel()

    # cv = KFold(n_splits=10, random_state=1, shuffle=True)
    #
    # # Build multiple linear regression model
    # model = LinearRegression()
    #
    # # Use k-fold CV to evaluate model
    # scores = cross_val_score(model,X_train ,y_train , scoring='neg_mean_absolute_error', cv=cv, n_jobs=-1)

    li.train(X_train,y_train)
    print('Mean Square Error for linear reg ', metrics.mean_squared_error(y_val, li.predict(X_val)))
    print('r2_Score', metrics.r2_score(y_val, li.predict(X_val)))

    #
    # poly_features = PolynomialFeatures(degree=4)
    #
    #
    # X_train_poly = poly_features.fit_transform(X_train)
    #
    #
    # poly_model = linear_model.LinearRegression()
    # poly_model.fit(X_train_poly, y_train)
    #
    # y_train_predicted = poly_model.predict(X_train_poly)
    # ypred=poly_model.predict(poly_features.transform(X_test))
    #
    #
    # prediction = poly_model.predict(poly_features.fit_transform(X_val))
    # print("##########################################")
    # print("##########################################")
    #
    #
    # print('Mean Square Error by using PolynomialFeatures ', metrics.mean_squared_error(y_val, prediction))
    # print('r2_Score', metrics.r2_score(y_val, prediction))
    #
    #
    # true_player_value=np.asarray(y_test)[100]
    # predicted_player_value=prediction[100]
    #
    # print('True value for the first Reviewer_Score : ' + str(true_player_value))
    # print('Predicted value for the first Reviewer_Score : ' + str(predicted_player_value))
    # print("##########################################")
    # print("##########################################")
    #

    rf = RandomForestRegressorModel()

    rf.train(X_train, y_train)
    y_pred = rf.predict(X_val)
    mse = mean_squared_error(y_val, y_pred)
    print('Mean Squared Error by using RandomForestRegressor:', mse)
    print('r2_Score using RandomForest ', metrics.r2_score(y_val, y_pred))
    true_player_value=np.asarray(y_val)[100]
    predicted_player_value=y_pred[100]

    print('True value for the first Reviewer_Score : ' + str(true_player_value))
    print('Predicted value for the first Reviewer_Score : ' + str(predicted_player_value))



    n=NeuralNetworkRegressorModel()
    n.train(X_train,y_train)
    y_pred=n.predict(X_val)
    mse = mean_squared_error(y_val, y_pred)
    print("################################")
    print("################################")

    print('Mean Squared Error by using NeuralNetworkRegressorModel:', mse,"mean")
    print('r2_Score', metrics.r2_score(y_val, y_pred))

    true_player_value=np.asarray(y_test)[100]
    predicted_player_value=y_pred[100]

    print('True value for the first Reviewer_Score by using NeuralNetworkRegressorModel: ' + str(true_player_value))
    print('Predicted value for the first Reviewer_Score by using NeuralNetworkRegressorModel: ' + str(predicted_player_value))
    y_pred = n.predict(X_test)

    mse = mean_squared_error(y_test, y_pred)

    print('Mean Squared Error by using the best: ', mse)
    print('r2_Score', metrics.r2_score(y_test, y_pred))
    mape = mean_absolute_percentage_error(y_test, y_pred)
    print("Mean Absolute Percentage Error: ",format(mape * 100))


    true_player_value=np.asarray(y_test)[100]
    predicted_player_value=y_pred[100]

    print('True value for the first Reviewer_Score by using the best model : ' + str(true_player_value))
    print('Predicted value for the first Reviewer_Score by using the best model: ' + str(predicted_player_value))
    model1 = RandomForestRegressor(n_estimators=100, max_depth=10, random_state=42)
    model2 = LinearRegression()
    model3 = MLPRegressor()
    voting_clf = VotingRegressor(
        estimators=[('nn', model3), ('lr', model2),('rf',model1)])
    voting_clf.fit(X_train, y_train)


    y_pred = voting_clf.predict(X_test)
    score = voting_clf.score(X_test, y_test)
    true_player_value=np.asarray(y_test)[100]
    predicted_player_value=y_pred[100]
    print("################################")
    print("################################")

    print('VotingRegressor R^2 score:', score)
    print('the voting mean square error is ', mean_squared_error(y_test, y_pred))
    print('True value for the first Reviewer_Score by using voting: ' + str(true_player_value))
    print('Predicted value for the first Reviewer_Score by using voting: ' + str(predicted_player_value))




    with open('linear_reg.pkl', 'wb') as f:
        pickle.dump(li, f)


    with open('NeuralNetworkRegressorModel.pkl', 'wb') as f:
        pickle.dump(n, f)

    with open('RandomForestRegressor.pkl', 'wb') as f:
        pickle.dump(rf, f)

########################################################################################################################
else:
    PATH = input("ENTER TEST PATH")

    the_data = pd.read_csv(PATH)
    Y2 = the_data['Reviewer_Score']
    X2 = the_data.iloc[:, 0:17]

    X2 = preprocess1(X2)


    with open('linear_reg.pkl', 'rb') as f:
        linear_reg_model = pickle.load(f)

    # Load the RandomForestRegressor model
    with open('RandomForestRegressor.pkl', 'rb') as f:
        RandomForestRegressor_model = pickle.load(f)

    # Load the NeuralNetworkRegressor model
    with open('NeuralNetworkRegressorModel.pkl', 'rb') as f:
        NeuralNetworkRegressor_Model = pickle.load(f)

    y_pred = linear_reg_model.predict(X2)
    mse = mean_squared_error(Y2, y_pred)
    print('Mean Squared Error by using linear_reg_model:', mse)
    print('r2_Score:', r2_score(Y2, y_pred))

    y_pred=NeuralNetworkRegressor_Model.predict(X2)
    mse = mean_squared_error(Y2, y_pred)
    print('Mean Squared Error by using NeuralNetworkRegressorModel:', mse)
    print('r2_Score', metrics.r2_score(Y2, y_pred))

    y_pred = RandomForestRegressor_model.predict(X2)
    mse = mean_squared_error(Y2, y_pred)
    print('Mean Squared Error by using Random forest regressor:', mse)
    print('r2_Score', metrics.r2_score(Y2, y_pred))

