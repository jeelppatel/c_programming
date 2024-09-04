#include<stdio.h>


//	Q.2:- Gross Salary Calculator


 main() {
    float base_salary, HRA, DA, TA, gross_salary;
    float hra, da, ta, Gross_salary;
    
	printf("Enter the base salary: ");
    scanf("%f", &base_salary);
    
    printf("Enter the HRA percentage: ");
    scanf("%f", &HRA);
    
    printf("Enter the DA percentage: ");
    scanf("%f", &DA);
    
    printf("Enter the TA percentage: ");
    scanf("%f", &TA);
      
      hra = (HRA / 100) * base_salary;
	  da = (DA / 100) * base_salary;
	  ta = (TA / 100) * base_salary;
    
   gross_salary = base_salary + HRA + DA + TA;
   
   printf("Gross Salary: Rs. %0.2f",gross_salary);
   

}
