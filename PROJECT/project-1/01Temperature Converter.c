#include<stdio.h>

//	Q.1:- Temperature Converter

main(){
	
		float Fahrenheit, Celsius;
		
		printf("enter the Celsius ");
		scanf("%f", &Celsius);
		
		Fahrenheit= (1.8 * Celsius) + 32;
		
		printf("the Fahrenheit is: %.2f", Fahrenheit);
		
	
}
