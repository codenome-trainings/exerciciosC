#include <stdio.h>

int main() {
	int vetor[10];
	int par[10] = { 0 };
	int impar[10] = { 0 };
	int i;

	for(i = 0; i < 10; i++) {
		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	for(i = 0; i < 10; i++) {
		if(vetor[i] % 2 == 0) {
			par[i] = vetor[i];
		}
		else {
			impar[i] = vetor[i];
		}
	}

	printf("\n\nEstes são os números que você selecionou. \n");
	for(i = 0; i < 10; i++) {
		printf("%d ", vetor[i]);
	}

	printf("\n\nEstes são os números PARES que você selecionou. \n");
	for(i = 0; i < 10; i++) {
		printf("%d ", par[i]);
	}

	printf("\n\nEstes são os números IMPARES que você selecionou. \n");
	for(i = 0; i < 10; i++) {
		printf("%d ", impar[i]);
	}

	printf("\n\n\n");
}
