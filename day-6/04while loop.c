#include<stdio.h>


main(){
	
	int a ;
	printf("Enter any number: ");
	scanf("%d",&a);
	
	while(a>=1){
		if(a%2!=0){
		printf("%d\n", a);
		}
		a--;

	}
}
