#include <stdio.h>

/*desenvolva um programa que leia o sal�rio bruto de 05 funcion�rios
 de uma empresa, calcule e exiba o sal�rio l�quido de cada funcion�rio. 
 Lembre-se que o sal�rio l�quido � calculado abatendo o imposto do 
 sal�rio bruto, com base na faixa de sal�rio. Ao final, mostre 
 o total de sal�rios brutos, sal�rios l�quidos e impostos de todos 
 os funcion�rios.*/
 
float salBruto , salLiquido, imposto, totBruto, totLiquido, totImposto = 0; 
int cont=1;
int main(){
		do {
				
		printf("\nDigite o salario bruto do %d funcionario R$ = ", cont);
		scanf(" %f", &salBruto);
		totBruto = totBruto + salBruto;
		if(salBruto>0 && salBruto<=999.00){
			imposto = salBruto * 10/100;
			totImposto = totImposto + imposto;
			salLiquido = salBruto - imposto;
			totLiquido = totLiquido + salLiquido;
			printf(" Salario Bruto = R$ %.2f , imposto 10 porcento = R$ %.2f, Salario liquido = R$ %.2f \n", salBruto, imposto, salLiquido );
		}else if(salBruto>999 && salBruto<=1999.00){
			imposto = salBruto * 15/100;
			totImposto = totImposto + imposto;
			salLiquido = salBruto - imposto;
			totLiquido = totLiquido + salLiquido;
			printf(" Salario Bruto = R$ %.2f , imposto 15 porcento = R$ %.2f, Salario liquido = R$ %.2f \n", salBruto, imposto, salLiquido );
		}else if(salBruto>1999 && salBruto<=9999.00){
			imposto = salBruto * 20/100;
			totImposto = totImposto + imposto;
			salLiquido = salBruto - imposto;
			totLiquido = totLiquido + salLiquido;
			printf(" Salario Bruto = R$ %.2f , imposto 20 porcento = R$ %.2f, Salario liquido = R$ %.2f \n", salBruto, imposto, salLiquido );
		}else if(salBruto>9999 && salBruto<=99999.00){
			imposto = salBruto * 25/100;
			totImposto = totImposto + imposto;
			salLiquido = salBruto - imposto;
			totLiquido = totLiquido + salLiquido;
			printf(" Salario Bruto = R$ %.2f , imposto 25 porcento = R$ %.2f, Salario liquido = R$ %.2f \n", salBruto, imposto, salLiquido );
		}else{
			imposto = salBruto * 35/100;
			totImposto = totImposto + imposto;
			salLiquido = salBruto - imposto;
			totLiquido = totLiquido + salLiquido;
			printf(" Salario Bruto = R$ %.2f , imposto 35 porcento = R$ %.2f, Salario liquido = R$ %.2f \n", salBruto, imposto, salLiquido );
		}cont++;	
		
    }while(cont<=5);
		
	
	printf("\nSalarios bruto total= R$  %.2f \n", totBruto);
	printf("Salario liquido total = R$ %.2f \n", totLiquido);
	printf("Total de imposto = R$ %.2f", totImposto);
	
	
	
} 
