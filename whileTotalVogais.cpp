#include <stdio.h>
int contA, contE, contI, contO, contU = 0;
char letra;
int main(){
	while(letra !='.'){
		printf("Digite uma letra maiusculas(entre A...Z) - para sair digite um ponto '.' = " );
		scanf(" %c", &letra);
		switch(letra){
			
			case 'A':
				contA++;
				break;
			case 'E':
				contE++;
				break;
			case 'I':
				contI++;
				break;
			case 'O':
				contO++;
				break;
			case 'U':
				contU++;
				break;	
		}
		
	}
	printf("Total de letras 'A' digitdas = %d \n", contA);
	printf("Total de letras 'E' digitdas = %d \n", contE);
	printf("Total de letras 'I' digitdas = %d \n", contI);
	printf("Total de letras 'O' digitdas = %d \n", contO);
	printf("Total de letras 'U' digitdas = %d \n", contU);

	
	
	
	
}
