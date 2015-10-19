#include <stdio.h>

int main() {
	float altura;
	int sexo;
	float pesoIdealHomem, pesoIdealMulher;
	printf("Calcule o peso ideal.\n");
	printf("[1] Para homem | [2] Para mulher | [0] Sair\n");
	scanf("%d", &sexo);

	switch(sexo) {
		case 1:
			printf("Digite sua altura: ");
			scanf("%f", &altura);
			pesoIdealHomem = (72.7 * altura) - 58;
			printf("Seu peso ideal é: %0.2f \n", pesoIdealHomem);
			break;
		case 2:
			printf("Digite sua altura: ");
			scanf("%f", &altura);
			pesoIdealMulher = (72.7 * altura) - 58;
			printf("Seu peso ideal é: %0.2f\n", pesoIdealMulher);
			break;
		default:
			printf("Saindo...");
			return 0;
	}
	

}
