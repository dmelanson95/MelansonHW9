"""

sumLines.py by David Melanson
IoT Homework 9 Problem 2

Reads a file of the name passed to it in arg1
Prints the sum, number of elements, and average value from file

example invocation: python3 sumLines.py dataInput.txt

"""


import os, sys
 
sum, numElements = 0, 0

#calculate sum and number of elements without using built in python functions
def computeStuff(num : int) -> None:
    #use global variables not locals
    global sum, numElements
    sum += num
    numElements +=1

#open, read, and split file to get each element separately, cast it to an integer and pass to compute stuff function
[computeStuff(int(i)) for i in open(sys.argv[1]).read().split()]
avg = sum/numElements
print(f"Sum = {sum}, Number of Elements = {numElements}, and Average = {avg}")

