#include <stdio.h>

int main(){
	int cadastrado, ativo, logado;
	char opcao;
	cadastrado = ativo = logado = 0;
	
	printf("Deseja cadastrar sua conta? \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		cadastrado = 1;
		printf("\nConta Cadastrada \n");
	}
	
	printf("Deseja ativar sua conta? \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		ativo = 1;
		printf("\nConta ativada \n");
	}
	
	printf("Deseja fazer logim sua conta? \n");
	scanf(" %c", &opcao);
	
	if(opcao == 'S'){
		logado = 1;
		printf("\nConta Logada \n");
	}
	
	if((cadastrado == 1) &&((ativo == 1) || (logado == 1))){
	printf("\nSeja Bem vindo! \n");
	}else{
		printf("Algo deu errado!");
	}
	
	
	
	
}
