#include <stdio.h>

/* desenvolva um programa que leia uma sequ�ncia de n�meros, 
podendo terminar com o n�mero 0 ou 9. Para cada n�mero lido 
(diferente de 0 ou 9), mostre seu sucessor caso o n�mero seja par,
 ou seu antecessor se o n�mero for �mpar.*/
 
 int main(){
 	int num;
 	do{
 		printf("Digite um numero inteiro: ");
		scanf(" %d", &num);
		if (num == 0 || num == 9){
			printf("FIM");
		}else
			if (num%2 == 0){
				printf("Voce digitou um numero par %d e seu sucessor e = %d \n", num , num+1);
			}else {
				printf("Numero impar %d e seu antecessor e = %d \n", num, num-1);
			}
	}while(num != 0 && num != 9);
	 
	return 0;
 	
 	
 }
