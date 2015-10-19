#include <stdio.h>

int potencia(int a, int b) {
	int resultado = 1;
	int i;
	for (i = 0; i < b; ++i) {
		resultado = resultado * a;
	}
	return resultado;
}

int main() {
	int numero;
	int elevado;
	int total;
	printf("Digite um número X. \n");
	scanf("%d", &numero);
	printf("Digite a potencia. \n");
	scanf("%d", &elevado);

	total = potencia(numero, elevado);

	printf("%d\n", total);

}
