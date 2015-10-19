#include <stdio.h>

int main() {
	int idade;
	

	printf("Digite a idade: \n");
	scanf("%d", &idade);

	if(idade >= 18 && idade <= 65) {
		printf("Eleitor obrigatório\n");
	} else if(((idade >= 16) && (idade <18)) || (idade > 65)) {
		printf("Eleitor facultativo");
	} else {
		printf("Não eleitor.");
	}

}
