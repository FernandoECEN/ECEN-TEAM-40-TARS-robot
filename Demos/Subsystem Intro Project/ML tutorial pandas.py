import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
print("Pandas version:",pd.__version__)

city_names = pd.Series(['Houston','Dallas','Austin'])
population = pd.Series([5000000, 3000000, 1000000])

cities = pd.DataFrame({'City name':city_names,'Population':population})

california_housing_dataframe = pd.read_csv("https://download.mlcc.google.com/mledu-datasets/california_housing_train.csv", sep=",")
print(california_housing_dataframe.describe())
print(california_housing_dataframe.head())
california_housing_dataframe.hist('housing_median_age')
plt.show()