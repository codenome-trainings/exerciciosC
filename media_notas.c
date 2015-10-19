#include <stdio.h>

int main() {
	int cont = 1;
	float nota1, nota2, media;

	while(cont == 1) {
		printf("Digite a primeira nota: \n");
		scanf("%f", &nota1);
		printf("Digite a segunda nota: \n");
		scanf("%f", &nota2);
		media = (nota1 + nota2) / 2;
		printf("A media é: %f\n", media);

		printf("\n\nVocê deseja continuar?\n [1] SIM | [0] NÃO");
		scanf("%d", &cont);
	}
}
