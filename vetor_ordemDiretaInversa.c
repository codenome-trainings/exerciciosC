#include <stdio.h>

int main() {
	int codigoNumerico[50];
	int i;
	int escolha = 0;

	for(i = 1; i <= 50; i++) {
		printf("Digite o %d número: ", i);
		scanf("%d", &codigoNumerico[i]);
	}

	printf("Selecione uma opção: [1] ORDEM DIRETA | [2] ORDEM INVERSA | [0] SAIR: ");
	scanf("%d", &escolha);

	switch(escolha) {
		case 1:
		for(i = 1; i <= 50; i++) {
			printf("%d ", codigoNumerico[i]);
		}
		break;

		case 2:
		for(i = 50; i > 0; --i) {
			printf("%d ", codigoNumerico[i]);
		}
		break;

		case 0:
		break;

		default:
		printf("Opção inválida. Tente outra opção. \n");
	}

	printf("\n\n\n");
}
