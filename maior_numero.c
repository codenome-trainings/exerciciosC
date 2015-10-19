#include <stdio.h>

int main() {
	int i, numero, maior = 0;

	for(i = 1; i <= 20; i++) {
		printf("Digite o %d numero: ", i);
		scanf("%d", &numero);
		if(numero > maior) {
			maior = numero;
		}
	}
	printf("O maior número digitado é: %d\n", maior);
}
