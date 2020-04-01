#!/usr/bin/env python

from pandas import read_csv


# creating data frame
df = read_csv("coronavirus.csv", encoding="ISO-8859-1")

print(df.head())   # Display first 5 rows
print(40*"-*-")
print(df.tail())   # Display last  5 rows


# To find highest value of cases
maximum = df.cases.max()
print(f"Maximum number of cases:{maximum}" . format(maximum))
print(40*"-*-")

# standard statistical measument such mean,median, min, max
print(df.describe())

print(40*"-*-")
# correlation
print(df.corr())

print(40*"-*-")
print(df.countriesAndTerritories.nunique())



