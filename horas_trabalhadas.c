#include <stdio.h>

int main() {
	int horasTrabalhadas, totalDeHoras = 0;
	int i;

	for(i = 0; i < 5; i++) {
		printf("Quantas horas voce trabalho no %dº dia?\n", i + 1);
		scanf("%d", &horasTrabalhadas);
		totalDeHoras = horasTrabalhadas + totalDeHoras;
	}
	printf("Trabalhei %d horas.\n", totalDeHoras);
}
