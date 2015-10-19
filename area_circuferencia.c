/* 
 * File:   main.c
 * Author: thiago
 *
 * Created on 13 de Outubro de 2015, 18:48
 * Problema: Programa de computador que calcule a área de uma circuferência 
 *           e apresente a medida.
 *  */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

float entrada();
float calc_Area(float raio);

/*
 * 
 */

int main(int argc, char** argv) {
     
    float raio;
    float total;
   
    printf("Digite o raio: ");
    raio = entrada();
    total = calc_Area(raio);
    printf("%f é a área da circuferência.", total);
   
    return (EXIT_SUCCESS);
}


float entrada() {
    float x;
    scanf("%f", &x);
    return x;
}

float calc_Area(float raio) {
    float pi = 3.14159265;
    float area;
    
    area = pi * (raio * raio);
    
    return area;
}
