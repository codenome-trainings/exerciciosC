#include <stdio.h>
#include <string.h>

int main() {

	int  numeroPessoas;
	int menorIdade = 0, maiorIdade = 0;

	printf("Quantos pessoas deseja registrar? ");
	scanf("%d", &numeroPessoas);

	int idade[20];
	char nome[20];
	int i;

	for(i = 0; i < numeroPessoas; i++) {
		printf("NOME: \n");
		scanf("%s", &nome[i]);
		printf("IDADE: \n");
		scanf("%d", &idade[i]);
	}
	for(i = 0; i < numeroPessoas; i++) {
		if(idade[i] > maiorIdade) {
			maiorIdade = idade[i];
			printf("%s\n", nome[i]);
			printf("%d\n", maiorIdade);
		}
		
	}
	for(i = 0; i < numeroPessoas; i++) {
		if(idade[i] < menorIdade) {
			menorIdade = idade[i];
			printf("%s\n", nome[i]);
			printf("%d\n", maiorIdade);
		}
		
	}

	printf("\n\n");
}
