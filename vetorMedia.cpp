#include <stdio.h>

int main(){
	float nota[5], totNota, media;
	for(int cont=0; cont<5; cont++){
		printf("Digite a nota: \n");
		scanf(" %f",&nota[cont]);
		totNota = totNota + nota[cont];
	}
	media = totNota/5;
	printf("media %.2f \n",media) ;
	for(int cont=0; cont<5; cont++){
		if(nota[cont]>=media){
			printf("\n %.2f", nota[cont]);
		}
	}	
	return 0;
}
