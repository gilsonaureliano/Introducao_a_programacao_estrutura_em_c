#include <stdio.h>

int main(){
	const int totQ = 5, totL = 3;
	int vet[totQ];
	int list[totL];
	printf("Digite 5 numeros do vetor geral \n");
	for(int cont=0; cont<totQ; cont++){
		scanf(" %d",&vet[cont]);
	}	
	printf("Quais os 3 numeros voce deseja encontrar sua posicao \n");
	for(int conti=0; conti<totL; conti++){
		scanf(" %d",&list[conti]);
	}
	
	for(int contv=0; contv<totL; contv++){
		for(int cont=0; cont<totQ; cont++){
		   if(list[contv] == vet[cont]){
		   	    printf("numero %d posicao %d  \n", list[contv] ,cont );
		   	    cont = totQ;
		   }else if(cont == totQ-1){
		   		printf("numero %d nao encontrado no vetor \n", list[contv]);
		   }
	}	
		
	}
}
