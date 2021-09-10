#include <stdio.h>

int main(){
	int num;
	printf("Digite um numero inteiro: ");
	scanf(" %d", &num);

	for(int cont=1;cont<=20;cont=cont+1){
		
		printf(" %d posicao = %d\n", cont, num);
	}
	return 0;	
}
	
