#include <stdio.h>

int main() {
	int x;
	printf("Digite um número: \n");
	scanf("%d", &x);
	if(x % 10 == 0 || x % 5 == 0 || x % 2 == 0) {
		printf("Este número é divisivel por 2, 5 ou 10.\n");
	} else {
		printf("%d: Não é por 2, nem 5, nem 10. \n", x);
	}
}
