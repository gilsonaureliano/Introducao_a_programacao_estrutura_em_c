#include <stdio.h>

//Faça um programa que gere uma matriz 5x5, conforme esta sequência:1 ou 0

int main(){
	int matz[5][5], linha, coluna;

	for(linha=0;linha<5;linha++){
		for(coluna=0;coluna<5;coluna++){
			if (linha != coluna){
			 matz[linha][coluna]= 1	;
			}
			else {
				matz[linha][coluna]= 0	;
			}
						
		}
	}
	for(linha=0;linha<5;linha++){
		printf(" \n");
		for(coluna=0;coluna<5;coluna++){
			printf(" %d ", matz[linha][coluna]);
			
		}
	}

	return 0;
}

