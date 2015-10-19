/* 
 * File:   main.c
 * Author: thiago
 *
 * Problema: Elaborar um programa que calcule o reajuste de salário de um funcionário.
 *           Considere que o funcionário deve recever um reajuste de 15% caso seu
 *           salário seja menor que 500. Se o salário for maior ou igual a 500,
 *           mas menor ou igual a 1000, seu reajuste será de 10%, e se caso seja
 *           ainda maior que 1000, o reajuste deve ser de 5%.
 * 
 * Created on 13 de Outubro de 2015, 19:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Estruturas 
 */

typedef struct funcionario {
    char nome[100];
    int idade;
    float salario;
} funcionario;

/*
 *  Funções
 */
void reajuste(float x);
float totalComAumento(float x, float aumento);
/*
 * 
 */
int main(int argc, char** argv) {
    
    funcionario cadastro;
    
    __fpurge(stdin);
    printf("Nome completo: ");
    fgets(cadastro.nome, 100, stdin);
    printf("Idade: ");
    scanf("%d", &cadastro.idade);
    printf("salário: ");
    scanf("%f", &cadastro.salario);
    reajuste(cadastro.salario);
    
    return (EXIT_SUCCESS);
}

/*
 *  Funções
 */

void reajuste(float x) {
    float aumento;
    if(x < 500) {
        aumento = ((x / 100) * 15) + x;
    } else if((x >= 500) && (x <= 1000)) {
        aumento = ((x / 100) * 10) + x;
    } else {
        aumento = ((x / 100) * 5) + x;
    }
 
    totalComAumento(x, aumento);
}

float totalComAumento(float x, float aumento) {
    printf("Salário antigo: %f\r\n", x);
    printf("Salário novo: %f\r\n", aumento);
    printf("Você teve %f de aumento.\r\n", (aumento - x));
}
