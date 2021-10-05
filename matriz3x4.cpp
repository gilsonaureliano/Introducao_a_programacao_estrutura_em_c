#include <stdio.h>

//Faça um algoritmo que leia dados inteiros e armazene-os em uma matriz 3x4. Em seguida, 
//mostre a quantidade de números pares e ímpares armazenados na matriz.

int main(){
	int matz[3][4], linha, coluna;
	int totpar, totimpar=0;
	for(linha=0;linha<=2;linha++){
		for(coluna=0;coluna<=3;coluna++){
			printf("Digite numero matriz posicao( %d , %d )",linha,coluna);
			scanf(" %d", &matz[linha][coluna]);
			if(matz[linha][coluna] % 2==0){
				totpar++;
			}
			else{
				totimpar++;
			}	
			
				
			
		}
	}
	for(linha=0;linha<=2;linha++){
		printf(" \n");
		for(coluna=0;coluna<=3;coluna++){
			printf(" %d ", matz[linha][coluna]);
			
		}
	}
	printf("\n");
	printf("Total numeros pares %d \n", totpar);
	printf("Total numeros impares %d \n", totimpar);
	return 0;
}
