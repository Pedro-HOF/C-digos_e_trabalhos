#include <stdio.h>
#include <locale.h>
#include <math.h>
/*Lista 1 --> Exerc�cio 9
Escreva um programa na linguagem C para ler uma temperatura em graus Celsius e na sequ�ncia,
converta a informa��o de temperatura para graus Fahrenheit.

. A f�rmula de convers�o �: F = C * (9.0 / 5.0) + 32.0, onde F � a temperatura em Fahrenheit e,
C a temperatura em Celsius.
Apresente o resultado da convers�o na sa�da padr�o (terminal de texto).
*/

main(){
    setlocale(LC_ALL, "Portuguese");
    float F, C;

    printf("Programa para converter graus Celsius em Fahrenheit");
    printf("\n===================================================");
    printf("\n\nDigite aqui a temperatura em graus Celsius:");
    scanf("%f", &C);

    printf("A temperatura digitada �: %5.2f", C);

    F = C * (9.0 / 5.0) + 32.0;
    printf("\n\nA temperatura digitada em Fahrenheit �: %5.2f", F);
}

// Feito por Pedro Henrique de Oliveira Fonseca e Pedro Victor Barbosa
