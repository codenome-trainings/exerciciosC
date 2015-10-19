#include <stdio.h>

int main() {
	int quantidade;
	float preco;
	int i = 1;
	float total = 0;
	while(i <= 45) {
		printf("Qual o preço do %dº produto?\n", i);
		scanf("%f", &preco);
		printf("Qual a quantidade do %dº produto?\n", i);
		scanf("%d", &quantidade);
		total = (preco * quantidade) + total;
		i++;
	}
	printf("O total dos %d produtos é: %f\n", i - 1, total);
}
