#include <stdio.h>


main(){
    // Declare and initialize variables of different data types
    int intVar = 10;
    float floatVar = 3.14f;
    double doubleVar = 2.718281828459;
    char charVar = 'A';

    // Print the value and type of each variable
    printf("intVar: %d (int)\n", intVar);
    printf("floatVar: %.2f (float)\n", floatVar);
    printf("doubleVar: %.15lf (double)\n", doubleVar);
    printf("charVar: %c (char)\n", charVar);

    // Display the size of different data types using sizeof()
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));
/*
summary

	The C program declares variables of different data types (int, float, double, char), 
	prints their values, and displays the memory 
	size of each data type using sizeof().
*/
}

