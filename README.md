# OS-Lab_Sheet
Write a multithreaded program that calculates various statistical values for a list of numbers. 

This program will first read series of numbers from the data.txt file into an array and then create three separate worker threads. Pass the array into all three threads as a parameter when they get created. Thread one will determine the average of the numbers, the second will determine the maximum value, and the third will determine the minimum value. The worker threads will set these values and the parent thread will print the values.

For example, if you passed in 'data.txt'
 90 81 78 95 79 72 85

The program will output,

The average is: 	82
The maximum is:	95
The minimum is:	72


The variables representing the average, max, min and the array length should be stored globally. 
Use fscanf() function to read from the file

