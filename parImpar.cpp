#include <stdio.h>

int n, cont, num, somarPar, somarImpar = 0;
int main(){
	printf("Digite quantos numeros a lista devera ter: ");
	scanf(" %d", &n);
	
	for(cont = 1; cont<=n; cont++){
		printf("\nDigite o %d numero: ", cont);
		scanf(" %d", &num);
		if(num%2==0){
			somarPar =somarPar + num;
		}else{
			somarImpar= somarImpar + num;
		}
	}
	
	printf("\nA soma dos pares e = %d", somarPar);
	printf("\nA soma dos impares e = %d", somarImpar);
	
	
	return 0;
	
	
	
	
}
