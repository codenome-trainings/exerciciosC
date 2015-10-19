//Digitar um número e dizer se ele está entre 20 e 90.

#include <stdio.h>

int main() {
	int x;
	printf("Digite um número: ");
	scanf("%d", &x);
	if((x >= 20) && (x <= 90)) {
		printf("%d!!! Este valor está compreendido entre 20 e 90\n", x);
	} else {
		printf("%d!!! Este valor NÃO está compreendido entre 20 e 90\n", x);
	}

}
