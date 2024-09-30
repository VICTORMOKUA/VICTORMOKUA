#include <stdio.h>
int main () {
	int principal = 'p'//%d
   ;	float time ='t'//%f
   ;	float rate ='r'//%f
   ;	float amaount = 'a'//%f
   ;	float compoundinterest = 'ci'||'%f'
	
   ;	printf("Enter principal:");
	scanf("%d",&principal);
	printf("the principal is \t %d \n",principal);
	
	printf("Enter time(in yers):");
	scanf("%f",&time);
	printf("the time is \t %.1f \n time");
	
	printf("enter rate of interest:(%%) \n");
	scanf("%f",&rate);
	printf("the rate is \t %.2f \n" ,rate);
	
	//calculate the compoundinterest
	compoundinterest= principal*((1+rate/100),time);
	
	
	
	printf("the compoundinterest =%f",compoundinterest);
	
	return 0 ;
	
}