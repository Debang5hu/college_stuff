import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score,mean_squared_error


class MyModel:
  def __init__(self,path,independent_variables):
    df = pd.read_csv(path)
    self.x = df[independent_variables]
    self.y = df.iloc[:,-1]

  def train(self):
    X_train,X_test,y_train,y_test = train_test_split(self.x,self.y,train_size=0.2,random_state=0)

    # train
    model = LinearRegression()
    model.fit(X_train,y_train)

    # predict
    y_pred = model.predict(X_test)

    # evaluate
    print(f'r2 score: {r2_score(y_test,y_pred):.2f}')
    print(f'mean squared error: {mean_squared_error(y_test,y_pred):.2f}')

    # plot
    plt.figure(figsize=(6, 5))
    plt.scatter(y_test, y_pred, color='blue', edgecolors='k')
    plt.plot([y.min(), y.max()], [y.min(), y.max()], 'r--', lw=2)
    plt.xlabel("Actual Values")
    plt.ylabel("Predicted Values")
    plt.title("Actual vs Predicted")
    plt.grid(True)
    plt.show()

  def __del__(self):
    pass


if __name__ == '__main__':

  independent_variables = ['ENGINESIZE','CYLINDERS','FUELCONSUMPTION_COMB']
  co2 = MyModel('/content/fuel_consumption_dataset.csv',independent_variables)
  co2.train()

  independent_variables = ['year','km_driven']
  car = MyModel('/content/used_cars_dataset.csv',independent_variables)
  car.train()