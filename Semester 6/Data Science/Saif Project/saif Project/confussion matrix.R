library(readxl)
DataTest_1_ <- read_excel("C:/Users/maraf/Downloads/DataTest (1).xlsx")
View(DataTest_1_)
library(readxl)
library("caTools")
sample.split(DataTest_1_$pixel56,SplitRatio = 0.60) -> split_log
subset(DataTest_1_,split_log==T) -> train
subset(DataTest_1_,split_log==F) -> test
nrow(train)
nrow(test)
glm(pixel55~pixel56,data  =  train, family = "binomial") -> mod_log
mod_log



predict(mod_log,newdata = train, type = "response") -> result_log
View(result_log) 
range(result_log) 
table(train$pixel56,result_log>0.3) 

precision <- (0)/(0+1)
precision






