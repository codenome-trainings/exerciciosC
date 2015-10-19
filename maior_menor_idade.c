#include <stdio.h>

int main() {
	int idade;
	

	printf("Digite a idade: \n");
	scanf("%d", &idade);

	if(idade >= 18 && idade <= 65) {
		printf("Você é maior de idade\n");
	} else if(idade >= 65) {
		printf("Você é um idoso.\n");
	} else {
		printf("Você é menor de idade. \n");
	}

}
