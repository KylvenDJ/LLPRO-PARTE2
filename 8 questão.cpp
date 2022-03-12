#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int valor(int n) {
	int fatorial;
	for(fatorial = 1; n > 1; n = n - 1) {
	fatorial = fatorial * n;
}
    return fatorial;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil: ");
	int num, resposta;
	
	printf("\t\tColoque aqui o valor inteiro positivo: ");
	scanf("%d", &num);
	
	resposta = valor(num);

    printf("\n\nO fatorial do %d sera: %d", num, resposta);
    
return 0;
}
