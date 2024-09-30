#include <stdio.h>
int main () {
 	int principal ='p'//%d
 	; float time ='t'//%f
 	; float rate ='r'//%f
 	; float simpleinterest='si'//%f
 	
  	; printf("enter the principal:");
 	; scanf("%d" ,&principal);
 	; printf("the principal is \t %d \n", principal);
 	
	printf("enter the time:" );
	scanf("%f", &time);
	printf("the time is \t  %.1f \n");
	
	printf ("enter the rate of interest (%%) :");
	scanf("%f" ,&rate)
 	; printf("the rate is \t %.2f \n");
	
	//caculate the simpleinterest
	simpleinterest=principal*((rate/100),time);
	
	printf("simpleinterest=%f" ,simpleinterest);
	
	return 0;
	
	
}