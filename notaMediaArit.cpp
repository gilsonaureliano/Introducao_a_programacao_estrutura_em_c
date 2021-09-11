#include <stdio.h>
float nota1, nota2, nota3, media = 0;

int main(){
	for(int alunos = 1; alunos <= 5 ; alunos ++){
		printf("\nDigite as notas %d aluno : ", alunos);
		for(int cont = 1; cont<=3; cont ++){
			printf("\nDigite a nota%d = ", cont);
			if(cont == 1){
			scanf(" %f", &nota1);
			}
			else if(cont == 2){
				scanf(" %f", &nota2);
			}else{
				scanf(" %f", &nota3);
			}
			
			
		}
		media = (nota1+nota2+nota3)/3;
		printf("\nA media foi de %.2f", media);
		
		if(media >= 7){
			printf("\nAluno Aprovado\n");
		}else{
			printf("\nChore muito!!!!\n");
		}
					
	}
	 return 0;
}
