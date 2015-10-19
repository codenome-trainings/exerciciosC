#include <stdio.h>

int main() {
	float salario;
	float total;

	printf("Digite seu salário: \n");
	scanf("%f", &salario);

	if(salario >= 600 || salario <= 1200) {
		printf("O desconto é de 20 por cento \n");
		total = salario - ((salario/100) * 20);
		printf("O total é: %0.2f\n", total);
	} else if(salario >= 1200 || salario <= 2000) {
		printf("O desconto é de 25 por cento \n");
		total = salario - ((salario/100) * 25);
		printf("O total é: %0.2f\n", total);
	} else if(salario > 2000) {
		printf("O desconto é de 30 por cento \n");
		total = salario - ((salario/100) * 30);
		printf("O total é: %0.2f\n", total);
	} else {
		printf("Insento do desconto\n");
	}
}
