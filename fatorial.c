#include <stdio.h>
#include <stdlib.h>


int fatorial(int x) {
    int i;
    int fatorial = 1;
    for (i = 1; i <= x; i++) {
        fatorial *= i;
    }
    
    return fatorial;
}

int main(int argc, char** argv) {
    
    int numFAT;
    int resultado;
    
    printf("Digite um número: ");
    scanf("%d", &numFAT);
    
    resultado = fatorial(numFAT);
    
    printf("O fatorial de %d é equivalente à %d", numFAT, resultado);

    return (EXIT_SUCCESS);
}


