#include <stdio.h>
#include <locale.h>

/*Lista 2 --> exerc�cio 1
Escreva um programa na linguagem C para ler dois n�meros quaisquer e ent�o, apresente qual deles � o maior.*/

int main() {
setlocale(LC_ALL, "Portuguese");
float n1, n2;
printf("\nEscreva o primeiro n�mero para achar o maior entre dois n�meros: ");
scanf("%f", &n1);
printf("O numero digitado foi %.2f\n\n", n1);

printf("Escreva o segundo n�mero para achar o maior entre dois n�meros: ");
scanf("%f", &n2);
printf("O numero digitado foi %.2f\n\n", n2);

if (n1 > n2)
    printf("O primeiro n�mero que � %.2f � maior que o segundo", n1);
else if (n2 > n1)
    printf("O segundo n�mero que � %.2f � maior que o primeiro", n2);
    else
        printf("Os n�meros s�o iguais");
}

// Feito por Pedro Henrique de Oliveira Fonseca e Pedro Victor Barbosa
