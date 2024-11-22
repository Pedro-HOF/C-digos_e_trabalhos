#include <stdio.h>
#include <stdlib.h> // EXIT_SUCCESS
#define TAMANHO 32
//Prototipo do procedimento

/* 1. Escreva um programa para ler do teclado uma sequencia de bytes que termina com \n.
Armazene essa sequencia em um vetor e entao, elabore uma funcao para apresentar o conteudo
desse vetor no terminal de texto.
 *Defina o tamanho maximo do vetor em 32 bytes. */

 void show(int, char []);

int main(void)
{
    char linha[TAMANHO] = {0};
    unsigned short n = 0;           //para economizar memoria e o unsigned é para considerar so os positivo

    //Limpar o terminal de texto
    //printf("\033c");
    //printf("\033[H\033[J");

    while (1) {
        linha[n] = getchar();

        if ((linha[n] == '\n') || (n == (TAMANHO - 1)))
            break;
        n++;        // n = n + 1;
    }

    show(n, linha);
    return (EXIT_SUCCESS);
}

void show(int n, char vetor[]) {
    int i = 0;

    for (i = 0; i <= n; i += 1) {
        putchar(vetor[i]);
    }
    return;
}
