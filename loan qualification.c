#include <stdio.h>
int main () {
	int age ;
	float income;
	
	//check the age of the user
	printf("the user age :");
	scanf("%d" ,&age);
	
	//check the income of the user 
	printf("the user income:");
	scanf("%f" ,&income);
	
	//confirm whether the user meets the loan specification
	if (age>=21 && income>=21000){
    printf("congratulation you are eligible for a loan, \n");	
	}else{
	printf("sorry you do not qualify for the loan, \n");
	
	}
	
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
