#include <stdio.h>
int num, maior = 0;
int main(){
	for(int cont=0;cont<=4;cont+=1){
		printf("\nDigite o %d numero: ", cont);
		scanf(" %d", &num);
		if(num>maior){
			maior = num;
		}
	}
	printf("O maior numero digitado foi %d", maior);
	
	
	
}
