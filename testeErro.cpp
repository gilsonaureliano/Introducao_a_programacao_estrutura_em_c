#include <stdio.h>

int main(){
int vet [8] = {5,1,4,2,7,8,3,6};
int ind, aux;
    for (ind=7;ind>=4;ind--)
   {
      aux=vet[7-ind];
      vet[7-ind]=vet[ind];
      vet[ind]=aux; 
      printf(" %d", vet[ind]);
   } 	
}

