#include<stdio.h>


main(){
	
	float a, b, c, mini;
	printf("enter a: ");
	scanf("%f",&a);
	
	printf("enter b: ");
	scanf("%f",&b);	
	
	printf("enter c: ");
	scanf("%f",&c);
	
	if (a<=b){
		if (a<=c){
			mini=a;
		}else {
			mini=c;
		}
	}
	else{
		if(b<=c){
			mini=b;
		}else {
			mini=c;
		}
	}
		printf("minimum value is:%.1f ",mini);
}
