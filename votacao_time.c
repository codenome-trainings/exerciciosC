#include <stdio.h>

int main() {
	int botafogo = 0;
	int flamengo = 0;
	int fluminense = 0;
	int vasco = 0;

	int cont = 1;

	while(cont == 1) {
		int voto;
		printf("Para quem é o seu voto: \n");
		printf("[1] Botafogo\n");
		printf("[2] Flamengo\n");
		printf("[3] Fluminense\n");
		printf("[4] Vasco\n");
		printf("[5] EXIBIR RESULTADOS\n");
		scanf("%d", &voto);
		switch(voto) {
			case 1:
				botafogo = botafogo + 1;
				break;
			case 2:
				flamengo = flamengo + 1;
				break;
			case 3:
				fluminense = fluminense + 1;
				break;
			case 4:
				vasco = vasco + 1;
				break;
			case 5:
				printf("\n\n\nEstes são os resultados: \n");
				printf("[1] Botafogo: %d\n", botafogo);
				printf("[2] Flamengo: %d\n", flamengo);
				printf("[3] Fluminense: %d\n", fluminense);
				printf("[4] Vasco: %d\n", vasco);
				cont = !cont;
				break;
			default:
				printf("Error. Tente novamente um opção válida. \n");
		}
	}

}
