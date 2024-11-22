#include <stdio.h>
#include <locale.h>
#include <math.h>
/*Lista 1 --> Exercício 9
Escreva um programa na linguagem C para ler uma temperatura em graus Celsius e na sequência,
converta a informação de temperatura para graus Fahrenheit.

. A fórmula de conversão é: F = C * (9.0 / 5.0) + 32.0, onde F é a temperatura em Fahrenheit e,
C a temperatura em Celsius.
Apresente o resultado da conversão na saída padrão (terminal de texto).
*/

main(){
    setlocale(LC_ALL, "Portuguese");
    float F, C;

    printf("Programa para converter graus Celsius em Fahrenheit");
    printf("\n===================================================");
    printf("\n\nDigite aqui a temperatura em graus Celsius:");
    scanf("%f", &C);

    printf("A temperatura digitada é: %5.2f", C);

    F = C * (9.0 / 5.0) + 32.0;
    printf("\n\nA temperatura digitada em Fahrenheit é: %5.2f", F);
}

// Feito por Pedro Henrique de Oliveira Fonseca e Pedro Victor Barbosa
