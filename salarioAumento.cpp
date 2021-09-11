#include <stdio.h>

float aumento, salario, novoSalario, maiorSalario = 0;
int cont;
int main(){
	printf("Digite a porcentagem de aumento %: ");
	scanf(" %f", &aumento);
	for(cont=1; cont<=3; cont++){
		printf("\nDigite o %d funcionario valor do salario R$: ", cont);
		scanf(" %f", &salario);
		novoSalario = salario + ((salario*aumento)/100);
		printf("Salario atual e de R$ %.2f e passara para R$ %.2f \n", salario  ,novoSalario);
		if(novoSalario>maiorSalario){
			maiorSalario = novoSalario;
		}
	}
	printf("\nO Maior salario da empresa e de R$ %.2f ", maiorSalario);
		
	return 0;
	
	
	
}
