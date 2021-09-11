#include <stdio.h>
float salario, maiorSalario, totalSalario = 0 ;
int main(){
	for(int cont=1; cont<=3; cont += 1){
		printf("\nDigite seu salario: ");
		scanf(" %f", &salario);
		totalSalario = totalSalario + salario;
		//printf(" %f", totalSalario);		
		if(maiorSalario < salario){
			maiorSalario = salario;
		}
	}
	printf("\nMaior salario = $ %.2f ", maiorSalario);
	printf("\nMedia de valor salarial = $ %.2f", totalSalario/3);
	
	
	
	
}
