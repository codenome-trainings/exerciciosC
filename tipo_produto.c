#include <stdio.h>

int main() {
	int codigo;
	printf("Digite o seu código: \n");
	scanf("%d", &codigo);

	if(codigo == 1) {
		printf("Alimento não perecível.\n");
	} else if(codigo >= 2 && codigo <=4) {
		printf("Alimento perecível.\n");
	} else if(codigo >= 5 && codigo <= 6) {
		printf("Vestuário. \n");
	} else if(codigo == 7) {
		printf("Higiêne pessoal. \n");
	} else if(codigo >= 8 && codigo <=15) {
		printf("Limpeza e utensílios domésticos. \n");
	} else {
		printf("Código inválido. \n");

	}
}
