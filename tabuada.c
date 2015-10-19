#include <stdio.h>

void abertura(int m) {
	printf("Tabuada do %d\n\n", m);
}


int main() {
	int multiplicador = 2;
	int i;
	abertura(multiplicador);
	for(i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", multiplicador, i, multiplicador * i);
	}
}
