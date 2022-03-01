
#Logical Regression
library(readxl)
library("caTools")
library("e1071")
library("caret")
library("ROCR")
Data <- read_excel("E:/University Files/University/BSE/6th Semester/Data Science/Project/Data File/Data.xlsx")
View(Data)
sample.split(Data$has_company_logo,SplitRatio = 0.65) -> split_log
subset(Data,split_log==T) -> train
subset(Data,split_log==F) -> test
nrow(train)
nrow(test)

for (i in 1:10){
  logistic_model <- glm(has_company_logo ~ telecommuting + fraudulent, data = train  , family = "binomial")
}
logistic_model

