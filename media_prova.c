#include <stdio.h>

int main() {
	float numeroAcertos = 0, media = 0;
	char G[20], R[20];
	int i = 0;


	for(i = 1; i <= 20; i++) {
		printf("Digite o gabarito da resposta %d: \n", i);
		scanf("%s", &G[i]);
	}

	i = 0;
	while(i <= 3) {
		for (i = 1; i <= 20; ++i) {
			printf("Digite a resposta %d do aluno: ", i);
			scanf("%s", &R[i]);
			if(R[i] == G[i]) {
				numeroAcertos = numeroAcertos + 1;
			}
		}
		media = numeroAcertos / 2;
		if(media >= 6) {
			printf("Parabéns! Você está aprovado. \n");
			printf("Sua nota foi: %f\n", media);
		} else {
			printf("Reprovado!\n");
			printf("Sua nota foi: %f\n", media);
		}
		i++;
	}

	printf("\n\n\n");
}
