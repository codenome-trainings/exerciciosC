/* 
 * File:   main.c
 * Author: thiago
 *
 * Problema: Cálcule a área de um triangulo
 * 
 * Created on 14 de Outubro de 2015, 20:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
float entrada();
float calcTria(float x, float y);
/*
 * 
 */
int main(int argc, char** argv) {
    
    float a, b, area;
    
    printf("Base: ");
    b = entrada();
    
    printf("\r\nAltura: ");
    a = entrada();
    
    area = calcTria(a, b);
    
    printf("Área do triangulo: %f", area);
    
    return (EXIT_SUCCESS);
}

float entrada() {
    float x;
    scanf("%f", &x);
    
    return x;
}

float calcTria(float x, float y) {
    float area;
    
    area = (x * y) / 2;
    
    return area;
}

