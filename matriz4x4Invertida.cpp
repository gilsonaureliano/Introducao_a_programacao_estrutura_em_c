#include <stdio.h>

//Fa�a um algoritmo que leia uma matriz 4x4 de n�meros inteiros. Gere uma segunda matriz, na qual as linhas s�o as colunas da matriz 1, 
//e as colunas s�o as linhas da matriz 1

int main(){
	int matz[4][4], linha, coluna;

	for(linha=0;linha<4;linha++){
		for(coluna=0;coluna<4;coluna++){
			printf("Digite numero matriz posicao( %d , %d )",linha,coluna);
			scanf(" %d", &matz[linha][coluna]);			
		}
	}
	for(linha=0;linha<4;linha++){
		printf(" \n");
		for(coluna=0;coluna<4;coluna++){
			printf(" %d ", matz[linha][coluna]);
			
		}
	}
	printf("\n\n");
	printf(" ++++ Invertida +++++ \n");
	for(linha=0;linha<4;linha++){
		printf(" \n");
		for(coluna=0;coluna<4;coluna++){
			printf(" %d ", matz[coluna][linha]);
		}
	
	}
	return 0;
}

