//Digitar um número e dizer se ele é par ou impar

#include <stdio.h>

int main() {
	int x;
	printf("Digite um número: ");
	scanf("%d", &x);
	if(x % 2 == 0) {
		printf("%d!!! Estu número é par\n", x);
	} else {
		printf("%d!!! Este número é impar.\n", x);
	}

}
