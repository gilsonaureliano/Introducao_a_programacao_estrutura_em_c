#include <stdio.h>

//Faça um algoritmo que leia números inteiros e armazene-os na matriz 4x4. 
//Porém, na diagonal principal, não armazene o número lido, e sim um 0 (zero).
//Na diagonal principal, os elementos têm linha = colona: [0][0], [1][1], [2][2], [3][3].

int main(){
	int matz[4][4], linha, coluna;

	for(linha=0;linha<4;linha++){
		for(coluna=0;coluna<4;coluna++){
			printf("Digite numero matriz posicao( %d , %d )",linha,coluna);
			scanf(" %d", &matz[linha][coluna]);
			if(linha == coluna){
				matz[linha][coluna] = 0;
			}							
			
		}
	}
	for(linha=0;linha<4;linha++){
		printf(" \n");
		for(coluna=0;coluna<4;coluna++){
			printf(" %d ", matz[linha][coluna]);
			
		}
	}

	return 0;
}

