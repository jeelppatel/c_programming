#include<stdio.h>

main(){
	
	float a, b, c, mini;
	printf("enter a: ");
	scanf("%f",&a);
	
	printf("enter b: ");
	scanf("%f",&b);	
	
	printf("enter c: ");
	scanf("%f",&c);	
	
	mini = (a<b?a:b);
	mini = (mini<c?mini:c);	
	printf("The minimum value is:%.2f ",mini);
		
	}
	
		
	
	
	

