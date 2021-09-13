#include <stdio.h>

float nota1, nota2, nota3, media = 0;
int cont = 1;
int main(){
	
	while(cont<=5){
		
			printf("\n %d aluno \n", cont);
			printf("\nDigite a 1 nota = ");
			scanf(" %f",&nota1);

			printf("\nDigite a 2 nota = ");
			scanf(" %f", &nota2);

			printf("\nDigite a 3 nota = ");
			scanf(" %f", &nota3);
		
		cont++;	
		media = ((nota1+nota2+nota3)/3);
		
		if(media >= 7){
			printf("\nMedia = %.2f , Aluno aprovado!!\n", media);
		}else{
			printf("\nMedia = %.2f , Aluno reprovado !!\n", media);
	
	}
	}
	
	return 0;
}

