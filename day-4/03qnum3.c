#include<stdio.h>

main(){
	
	float a ,b ,c ,ans;
	
	printf("Enter maths marks: ");
	scanf("%f",&a);
	
	printf("Enter english marks: ");
	scanf("%f",&b);
	
	printf("Enter science marks: ");
	scanf("%f",&c);
	
	ans = (a+b+c)/3;
	
	printf("Average mark: %f", ans);
	
}
