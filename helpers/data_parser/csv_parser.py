import pandas as pd
import numpy as np
import math
def cleanMileage(x):
    # print(x)
    # print(type(x))
    # print(type(x) != float)
    if type(x) != float:
        x = x.replace(",", "")
    # return int(x[x.index("-") + 2 : -3])-int(x[:x.index("-")]) if type(x) != float and x != "Not Specified" else "0"
    return int(x[x.index("-") + 2 : -3]) if type(x) != float and x != "Not Specified" else None

FILE_NAME = "2023 September data.csv"
DIR_PATH = "regression/data/"
df = pd.read_csv(DIR_PATH + FILE_NAME)
shortened_df = df[["Year Manufactured", "Engine Capacity", "Warranty", "Mileage", "Price"]]
shortened_df["Engine Capacity"] = shortened_df["Engine Capacity"].apply(lambda x: x[:-1] if ',' not in x else x[:-7] + "." + x[-6])
shortened_df["Warranty"] = shortened_df["Warranty"].apply(lambda x: x[0] if "No" not in x else "0")
shortened_df["Mileage"] = shortened_df["Mileage"].apply(cleanMileage) # Gets average mileage
# Remove cars with no mileage
shortened_df.dropna(inplace=True)
print(shortened_df)
print(shortened_df.iloc[16])
shortened_df.to_csv("parsed_car_data.csv")
# with open(, newline='') as csvfile:
#     spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
#     for row in spamreader:
#         print(', '.join(row))