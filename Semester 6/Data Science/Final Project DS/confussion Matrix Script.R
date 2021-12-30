#rafay Code:
#Confussion Matrix and Accury Code
library(readxl)
library("caTools")

library("caret")
Data <- read_excel("E:/University Files/University/BSE/6th Semester/Data Science/Project/Data File/Data.xlsx")
sample.split(Data$has_company_logo,SplitRatio = 0.65) -> split_log
subset(Data,split_log==T) -> train
subset(Data,split_log==F) -> test
nrow(train)
nrow(test)
glm(has_company_logo~telecommuting, data = train, family = "binomial") -> mod_log
predict(mod_log,newdata = train, type = "response") -> result_log
range(result_log)
table(train$has_company_logo,result_log>0.3)
accuracy <- (0+2)/(0+6+1+2)
plot(accuracy, type = "o")



