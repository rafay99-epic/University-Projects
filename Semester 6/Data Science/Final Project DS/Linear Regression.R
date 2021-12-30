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
lm(formula = has_company_logo ~ telecommuting, data = train ) -> lm.r
lm.r
plot(lm.r)
coef(lm.r)