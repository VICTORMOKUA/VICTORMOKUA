//Array in c-2D array
#include <stdio.h>
int main (){
	int i,j;
	int marks[2][3]={{10,20,30},{30,40,50}};
	
	//raw
	for(i=0;i<2;i++){
		
	//column
	for(j=0;j<3;j++){
		printf("marks[%d][%d]=%d \n",i,j,marks[i][j]);	
	}
	}
		return 0;	
}