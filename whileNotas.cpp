#include <stdio.h>

float nota1, nota2, nota3, media = 0;

int main(){
	
	for(int aluno = 1; aluno <= 5; aluno++){
	printf("\n %d aluno\n", aluno);	
	int cont = 1;
	while(cont<=3){
		
		if(cont ==1){
			printf("\nDigite a 1 nota = ");
			scanf(" %f",&nota1);
		}else if(cont==2){
			printf("\nDigite a 2 nota = ");
			scanf(" %f", &nota2);
		}else{
			printf("\nDigite a 3 nota = ");
			scanf(" %f", &nota3);
		}
		cont++;	
		
	}
	media = ((nota1+nota2+nota3)/3);
		
		if(media >= 7){
			printf("\nMedia = %.2f , Aluno aprovado!!\n", media);
		}else{
			printf("\nMedia = %.2f , Aluno reprovado !!\n", media);
	
	}
	
}
}
