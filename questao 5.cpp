#include <stdlib.h>
#include <locale.h>

	float valor_numerico();

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil: ");

	valor_numerico();
}

	float valor_numerico() {
	int numero;
	printf("\nDigite um numero:");
	scanf("%d", &numero);

		if(numero <= 0) {
		printf("\nEsse numero fica: Negativo");
}
	else{
		
	printf("\nEsse numero fica: Positivo");
}
}
