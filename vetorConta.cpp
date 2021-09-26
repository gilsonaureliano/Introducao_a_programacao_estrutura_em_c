#include <stdio.h>


int main(){
	int num[100];
	int contador;
	for(contador=0; contador<100; contador++){
		num[contador]=contador+1;
		printf(" %d",num[contador]);
	}
	printf("\n===================================================\n");
	for(contador=99; contador>=0; contador--){
		printf(" %d",num[contador]);
	
	}
	return 0;
	
	
	
}
