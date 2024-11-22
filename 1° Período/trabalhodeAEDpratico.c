#include <stdio.h>
#include <locale.h>

/*Lista 2 --> exercício 1
Escreva um programa na linguagem C para ler dois números quaisquer e então, apresente qual deles é o maior.*/

int main() {
setlocale(LC_ALL, "Portuguese");
float n1, n2;
printf("\nEscreva o primeiro número para achar o maior entre dois números: ");
scanf("%f", &n1);
printf("O numero digitado foi %.2f\n\n", n1);

printf("Escreva o segundo número para achar o maior entre dois números: ");
scanf("%f", &n2);
printf("O numero digitado foi %.2f\n\n", n2);

if (n1 > n2)
    printf("O primeiro número que é %.2f é maior que o segundo", n1);
else if (n2 > n1)
    printf("O segundo número que é %.2f é maior que o primeiro", n2);
    else
        printf("Os números são iguais");
}

// Feito por Pedro Henrique de Oliveira Fonseca e Pedro Victor Barbosa
