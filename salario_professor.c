/* 
 * File:   main.c
 * Author: thiago
 *
 * Created on 13 de Outubro de 2015, 19:04
 * Problema: Desenvolver um programa que calcule o salário líquido de um professor.
 *           Para elaborar o programa, é necessário possuir alguns dados, tais como:
 *           Valor da hora aula, número de horas trabalhadas no mês e percentual
 *           de desconto no INSS. Em primeiro lugar, deve-se estabelecer o seu salário bruto
 *           Para fazer o desconto e ter o valor do salário Liquido.
 */

#include <stdio.h>
#include <stdlib.h>


#define INSS 20


/*
 * 
 */

float entrada();
float salarioBruto(float x, float y);
float inss(float salario_bruto);

/*
 * 
 */
int main(int argc, char** argv) {
    float salario_Bruto, salario_Liquido;
    float hora_aula, horas_trabalhadas;
    
    printf("Digite o valor da hora aula: ");
    hora_aula = entrada();
    printf("Quantas horas de aula foi dada este mês: ");
    horas_trabalhadas = entrada();
    salario_Bruto = salarioBruto(hora_aula, horas_trabalhadas);
    salario_Liquido = inss(salario_Bruto);
    printf("%f é o seu salário bruto. \n", salario_Bruto);
    printf("%f é o seu salário Liquido. \n", salario_Liquido);
    return (EXIT_SUCCESS);
}

float entrada() {
    float x;
    scanf("%f", &x);
    
    return x;
}

float salarioBruto(float x, float y) {
    float salario_Bruto;
    salario_Bruto = x * y;
    
    return salario_Bruto;   
}

float inss(float salario_bruto) {
    float salario_Liquido;
    salario_Liquido = salario_bruto - ((salario_bruto/100)*INSS);
    
    return salario_Liquido;
}

