#include <stdio.h>

int num, maior;
int main(){
	int cont = 1;
	while(cont<=5){
		cont++;
		printf("Digite um numero inteiro psitivo: ");
		scanf(" %d", &num);
		if(num>maior){
			maior = num;
		}
	}
	printf("O maior valor digitado foi %d", maior);
}


