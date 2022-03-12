#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int valor(int n){
int i, soma = 100;

	for(i=0; i<n; i++){
	soma=soma+i;
}
return soma;
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil: ");
	
	int n,calculo = 100;
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	calculo = valor(n);
	printf("\n\n\t\tA soma dos valores entre 1 fica %d: %d \n\n", n, calculo);
	
return 0;
}

