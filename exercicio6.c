#include <stdio.h>
#include <math.h>

main()
{
    /*
    Escreva um programa que pergunte qual o raio de um círculo e imprima sua área
    */

    // variaveis

    double raio, area, PI = 3.1415;

    printf("Digite o valor do raio");
    scanf("%lf", &raio);

    // calculo da area do circulo = PI * (raio * raio)
    // area = PI * (raio * raio);
    area = PI * (pow(raio, 2));

    printf("A area do circulo e %lf:", area);
}