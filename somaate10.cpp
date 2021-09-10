#include <stdio.h>

int main(){
int soma = 0;
for(int cont=1;cont<=10;cont=cont+1){
	soma +=cont;
	printf(" %d", cont);
	
}
printf(" = %d\n", soma);
}
