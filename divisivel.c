//Digitar um número e dizer se ele é divisível por 5

#include <stdio.h>

int main() {
	int x;
	printf("Digite um número: ");
	scanf("%d", &x);
	if(x % 5 == 0) {
		printf("%d!!! Este número é divisivel por 5\n", x);
	} else {
		printf("%d!!! Este número não é divisivel por 5.\n", x);
	}

}
