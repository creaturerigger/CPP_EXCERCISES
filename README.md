# CPP_EXCERCISES
This repository contains excercise solutions for Deitel's "C++ How to Program" book, I only implemented problem statements in the excercises from the book based on the level of the reader according to the current excercises chapter level, in C++.

## EULERSNUMBER ##

This class has a function named as ```findEulersNumber()``` basically calculates approximate euler number and relative error based on the actual euler number with the precision of 1e-15 by using taylor series expansion of f(x)=e^x where expansion point is 0 (maclaurin series). User has to determine how many terms there should be in the taylor polynomial (n). Then the code straightforwardly evaluates approximate euler's number numerically in a while loop based on number of terms entered by the user and finally it shows up the result and the relative error as percent and actual value.

## MISCELLANEOUS ##

This class has several functions that perform miscellaneous tasks on user defined integers.

#### ```Miscellaneous::printIntegers()``` ####

This method prints integers from 1 to 30, 7 columns per each row.

#### ```Miscellaneous::IntegersProduct()``` ####

This method calculates product of integers entered by user.

#### ```Miscellaneous::averageIntegers()``` ####

This method calculates average of integers entered by user.

#### ```Miscellaneous::largestNumber()``` ####

This method finds the largest integer among integers entered by user.
