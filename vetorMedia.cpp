#include <stdio.h>

int main(){
	const int totQ = 5;
	float nota[totQ], totNota, media;
	for(int cont=0; cont<totQ; cont++){
		printf("Digite a nota: \n");
		scanf(" %f",&nota[cont]);
		totNota = totNota + nota[cont];
	}
	media = totNota/totQ;
	printf("media %.2f \n",media) ;
	for(int cont=0; cont<totQ; cont++){
		if(nota[cont]>=media){
			printf("\n %.2f", nota[cont]);
		}
	}	
	return 0;
}
