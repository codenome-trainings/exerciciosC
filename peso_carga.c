#include <stdio.h>

int main() {
	int peso = 0;
	int i = 1, caixa;
	

	while(i <= 25) {
		printf("Digite o peso da caixa %d\n", i);
		scanf("%d", &caixa);
		peso = caixa + peso;
		i++;
	}

	printf("%d é a carga que o caminhão vai levar.\n", peso);
}
