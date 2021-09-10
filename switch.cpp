#include <stdio.h>

int main(){
	int opcao;
	printf("Digite um numero inteiro: \n");
	scanf(" %d", &opcao);
	
	switch(opcao){
		case 1: {
			printf("Numero 1 \n");
			break;
		}
		case 2: {
			printf("numero 2 \n");
			break;
		}
		default: 
		printf("Fim");
	}
	
}


