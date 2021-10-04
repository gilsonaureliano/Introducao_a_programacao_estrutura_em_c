#include <stdio.h>

int main(){
	int mat[3][100], linha, coluna;
for (linha=0;linha<3;linha++)
{
	for (coluna=0;coluna<100;coluna++)
	{
		mat[linha][coluna]=0;
		printf(" %d",mat[linha][coluna]);
	}
}

}

