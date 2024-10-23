#include <stdio.h>

void confirmcustomerinfo(int customerID,char customerName,
int unitconsumed);
void calculateBill(int unitconsumed,float chargesperunit,float totalBill);
void displayBill(int customerID,char customerName,int unitconsumed,
float chargeperunit,float totalamount );

int main (){
	int customerID;
	char custormerName[20];
	int unitconsumed;
	float chargeperunit,totalBill;
	
	
getconfirmcustomerinfo(&customerID,customerName,unitconsumed);

calculateBill(unitconsumed,&chargesperunit,&totalamount);

displayBill(&cusomerID,customerName,unitconsumed,chargeperunit,totalamount)	
	
	return 0;
}
