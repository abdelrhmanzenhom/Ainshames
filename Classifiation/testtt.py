import pickle

from sklearn import metrics
from sklearn.ensemble import RandomForestClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.tree import DecisionTreeClassifier
import streamlit as st
import requests
from nltk import DecisionTreeClassifier
from streamlit_lottie import st_lottie
import joblib
import numpy as np

from sklearn.feature_selection import RFECV, SelectKBest, chi2
from sklearn.feature_selection import RFE, RFECV, SelectKBest
from sklearn.metrics import mean_squared_error
from sklearn.model_selection import train_test_split, StratifiedKFold
from sklearn import linear_model, metrics
from sklearn.preprocessing import PolynomialFeatures, LabelEncoder, StandardScaler
import numpy as np
import pandas as pd
from sklearn.tree import DecisionTreeClassifier
class RandomForestModel:

    def __init__(self,n_estimators, max_depth, random_state):
        self.model = RandomForestClassifier(n_estimators=n_estimators, max_depth=max_depth, random_state=random_state)

    def fit(self, X_train, y_train):
        self.model.fit(X_train, y_train)

    def predict(self, X_test):
        return self.model.predict(X_test)


class LogisticRegressionModel:

    def __init__(self,solver,penalty,max_iter, C):
        self.model = LogisticRegression(solver=solver,penalty=penalty,max_iter=max_iter,C=C)

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

    x_train['days_since_review'] = (x_train['days_since_review'].str.split(' ').str[0]).astype(int)

    x_train["Review_Date"] = pd.to_datetime(x_train["Review_Date"], dayfirst=True)

    x_train["Review_Date"]=x_train["Review_Date"].dt.month

    x_train['Tags'] =( x_train['Tags'].str.contains(' Leisure trip')).astype(int)

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

def load_lottie(url): # test url if you want to use your own lottie file 'valid url' or 'invalid url'
    r = requests.get(url)
    if r.status_code != 200:
        return None
    return r.json()






loaded_model = pickle.load(open('decision_tree_model.pkl', 'rb'))
loaded_model2 = pickle.load(open('logistic_regression_model.pkl', 'rb'))

loaded_model3 = pickle.load(open('random_forest_model.pkl', 'rb'))

#with open('decision_tree_model.pkl', 'rb') as f:
 #   decision_tree_model = pickle.load(f)

st.write('# Hotel Classification')
#st.header('Placement')

#lottie_link = "https://assets8.lottiefiles.com/packages/lf20_ax5yuc0o.json"
#animation = load_lottie(lottie_link)

st.write('---')
st.subheader('Enter your file path to get the accurcy')

with st.container():

    right_column, left_column = st.columns(2)

    with right_column:
        name = st.text_input('Path:')




    #with left_column:
     #   st_lottie(animation, speed=1, height=400, key="initial")


    if st.button('Get the accurcy for logstic'):
        the_data = pd.read_csv(name)
        Y = the_data['Reviewer_Score']
        X2 = the_data.iloc[:,0:16]

        X_new, Y_new = Pre_processing(X2,Y)

        print(X_new.shape)

        X_new = np.delete(X_new, [1, 4, 8, 12, 13, 14, 15], axis=1)
        print(X_new.shape)
        # Create a Recursive Feature Elimination (RFE) object






        logistic_regression_predictions = loaded_model2.predict(X_new)

        acc = metrics.accuracy_score(Y_new, logistic_regression_predictions)

            #st.write("## Predicted Status : ", result)
        st.write('logistic regression accurcy ', acc)
        st.balloons()

    if st.button('Get the accurcy for desion tree'):
        the_data = pd.read_csv(name)
        Y = the_data['Reviewer_Score']
        X2 = the_data.iloc[:, 0:16]

        X_new, Y_new = Pre_processing(X2, Y)

        print(X_new.shape)

        X_new = np.delete(X_new, [1, 4, 8, 12, 13, 14, 15], axis=1)
        print(X_new.shape)
        # Create a Recursive Feature Elimination (RFE) object

        decision_tree_predictions = loaded_model.predict(X_new)

        pred_Y = loaded_model.predict(X_new)
        acc = metrics.accuracy_score(Y_new, decision_tree_predictions)




        # st.write("## Predicted Status : ", result)
        st.write('the decision tree accurcy ', acc)
        st.balloons()
    if st.button('Get the accurcy for random forest'):
        the_data = pd.read_csv(name)
        Y = the_data['Reviewer_Score']
        X2 = the_data.iloc[:, 0:16]

        X_new, Y_new = Pre_processing(X2, Y)

        print(X_new.shape)

        X_new = np.delete(X_new, [1, 4, 8, 12, 13, 14, 15], axis=1)
        print(X_new.shape)
        # Create a Recursive Feature Elimination (RFE) object

        random = loaded_model3.predict(X_new)

        pred_Y = loaded_model3.predict(X_new)
        acc = metrics.accuracy_score(Y_new, random)

        # st.write("## Predicted Status : ", result)
        st.write('random forest accurcy ', acc)
        st.balloons()

