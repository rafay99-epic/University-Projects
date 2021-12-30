library(readxl)
Meta_Data2 <- read_excel("D:/maraf/Downloads/Meta_Data2.xlsx")
View(Meta_Data2)

library("caTools")
library("e1071")
library("caret")
sample.split(Meta_Data2,SplitRatio = 0.65) -> split_myData
subset(Meta_Data2,split_myData == T) -> train
subset(Meta_Data2,split_myData == F) -> test

subset(Meta_Data2,split_log==T) -> train
subset(Meta_Data2,split_log==F) -> test

scale(train[,1:4]) -> train_scale
scale(test[,1:4]) -> test_scale
set.seed(120)
naiveBayes(A1~.,data=train) -> classifier_cl
classifier_cl
predict(classifier_cl,newdata = test) -> y_predict
y_predict
table(test$A1,y_predict) -> cm
cm
confucionMatrix(cm)





#Aunty

library(readxl)
pokemon <- read_excel("C:/Users/Shaha/Pictures/pokemon.xlsx")
View(pokemon)
library("caTools")
library("e1071")
library("caret")
sample.split(pokemon$against_bug,SplitRatio = 0.5) -> split_log
subset(pokemon,split_log==T) -> train
subset(pokemon,split_log==F) -> test
nrow(test)
nrow(train)
scale(train[,1:4]) -> train_scale
scale(test[,1:4]) -> test_scale





# COnfussion Matrix

library(readxl)
Meta_Data2 <- read_excel("E:/BSSE/Semester 6/Introduction to Data Science (SE4883)/Project/Meta_Data2.xlsx", 
                         sheet = "Sheet1")
View(Meta_Data2)
library(caTools)
sample.split(Mata_Data2$A1,SplitRatio = 0.65) -> split_log
subset(Mata_data2,split_log==T) -> train
subset(Mata_data2,split_log==F) -> test
nrow(train)
nrow(test)
glm(Test~A2,data = train, family = "binomial") -> mod_log
predict(mod_log,newdata = test, type = "response") -> result_log
view(result_log) #viewing log
range(result_log) # range of probability
table(test$Test,result_log>0.3) #0.3 is the threshhold value
#predicting the table 0.3> t 0.3< F
# will give the confsion matrix
# for accuracy we input the output values and lace them in formula
# (leftDiagonal)/(Add all values)
# will predict the accuracy
accuracy <- (0+2)/(0+6+1+2)
plot(accuracy, type = "o")





#rafay Code:
#Confussion Matrix and Accury Code
library(readxl)
library("caTools")
library("e1071")
library("caret")
Data <- read_excel("E:/University Files/University/BSE/6th Semester/Data Science/Project/Data File/Data.xlsx")
View(Data)
sample.split(Data$has_company_logo,SplitRatio = 0.65) -> split_log
subset(Data,split_log==T) -> train
subset(Data,split_log==F) -> test
nrow(train)
nrow(test)
glm(has_company_logo~telecommuting, data = train, family = "binomial") -> mod_log
predict(mod_log,newdata = test, type = "response") -> result_log
view(result_log)
range(result_log)
table(test$has_company_logo,result_log>0.3)
accuracy <- (0+2)/(0+6+1+2)
plot(accuracy, type = "o")


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
set.seed(120)
logistic_model <- glm(has_company_logo ~ telecommuting + fraudulent, data = train  , family = "binomial")
logistic_model


#linear Regression
library(readxl)
library("caTools")
library("e1071")
library("caret")
Data <- read_excel("E:/University Files/University/BSE/6th Semester/Data Science/Project/Data File/Data.xlsx")
View(Data)
sample.split(Data$has_company_logo,SplitRatio = 0.65) -> split_log
subset(Data,split_log==T) -> train
subset(Data,split_log==F) -> test
train
nrow(train)
nrow(test)
lm(formula = has_company_logo  ~ telecommuting  , drop.unused.levels = TRUE)-> relation
relation


# try and have one error
#lm($has_company_logo ~ $telecommuting ) -> relation


#This is the code from the internet
lm.r= lm(formula = Salary ~ YearsExperience, data = trainingset)

# This code of line is working
lm(formula = has_company_logo ~ telecommuting, data = train ) -> lm.r

#linear Regression
library(readxl)
library("caTools")
library("e1071")
library("caret")
Data <- read_excel("E:/University Files/University/BSE/6th Semester/Data Science/Project/Data File/Data.xlsx")
View(Data)
sample.split(Data$has_company_logo,SplitRatio = 0.65) -> split_log
subset(Data,split_log==T) -> train
subset(Data,split_log==F) -> test
train
nrow(train)
nrow(test)
#This is the new line of code 
lm(formula = has_company_logo ~ telecommuting, data = train ) -> lm.r
#This is the old line of code and have error.
#lm(formula = has_company_logo  ~ telecommuting  , drop.unused.levels = TRUE)-> relation
#relation
 lm.r
 plot(lm.r)
 coef(lm.r)
 ypred= predict(lm.r , newdata = test)
 library(ggplot2)
 
 
 #working and this code is from internet
 ggplot() + geom_point(aes(x = test$telecommuting, y = train$has_company_logo), colour = 'red') + geom_line(aes(x = test$telecommuting, y = predict(lm.r, newdata = test)), colour = 'blue') + ggtitle('has_company_Logo vs telecommuting (test)') + xlab('has_company_logo') + ylab('telecommuting')
 
 
 
 
 
 
 