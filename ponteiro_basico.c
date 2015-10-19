#include <stdio.h>

void calcula(int* c) {
	printf("calcula %d\t %d\n", (*c), c);
	(*c)++;
	printf("calcula %d\t %d\n", (*c), c);
}


int main() {
	int c = 10;

	printf("main %d\t %d\n", c, &c);
	calcula(&c);
	printf("main %d\t %d\n", c, &c);

}
