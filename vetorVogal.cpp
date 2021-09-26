#include <stdio.h>

int main(){
 char letra;
 int totalVogal[5]={0,0,0,0,0};
 while(letra != 'z'){
 	printf("Digite uma letra (sair z): " );
 	scanf(" %c", &letra);
	if(letra == 'a'){
		totalVogal[0] = totalVogal[0] + 1;
	}else if (letra == 'e'){
		totalVogal[1] = totalVogal[1] + 1;
	}else if (letra == 'i'){
		totalVogal[2] = totalVogal[2] + 1;
	}else if (letra == 'o'){
		totalVogal[3] = totalVogal[3] + 1;
	}else if (letra == 'u'){
		totalVogal[4] = totalVogal[4] + 1;
	}
 }
 printf("\n Vogal A foi digitada %d vezes", totalVogal[0])	;
 printf("\n Vogal E foi digitada %d vezes", totalVogal[1])	;
 printf("\n Vogal I foi digitada %d vezes", totalVogal[2])	;
 printf("\n Vogal O foi digitada %d vezes", totalVogal[3])	;
 printf("\n Vogal U foi digitada %d vezes", totalVogal[4])	;
 return 0;
}
