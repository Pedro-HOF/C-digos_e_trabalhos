#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int p, tamanho = 0, flag = 0;
    p = 0;
    char direcao[6] = {0};
    int n1 = 10, n2 = 10, n3 = 10, i = 1;
    srand(time(NULL));
    p = (rand() %3) + 1;

    printf("Tentativa de alguma coisa!\n");
    printf("==========================================================================================================");
    printf("\nSer�o dadas situa��es e voc� s� pode responder com sim e n�o (usados somente em situa��es \n \
e n�o em dire��es), e para dire��es digite norte, leste, oeste.");

    do {

    printf("\n\nEscolha a dire��o :");
    scanf("%s", &direcao);

    n1 = strcmp (direcao,"norte");
    n2 = strcmp (direcao,"leste");
    n3 = strcmp (direcao,"oeste");

    printf ("%d", n1);
    printf ("%d", n2);
    printf ("%d", n3);
    if ((n1 == 0) || (n2 == 0) ||(n3 == 0)) {
        flag = 1;
    }

    } while (flag == 0);


    if (n1 == 0){
    printf("\nDirecao: %s = %s\n", direcao, direcao);

        switch (p){
            case 1:
                printf ("vc foi pro norte");
                break;
            case 2:
                printf ("vc foi pro norte e tomou dano");
                break;
            case 3:
                printf ("vc foi pro norte e morreu");
                break;
            }
    }
    if (n2 == 0){
    printf("\nDirecao: %s = %s\n", direcao, direcao);

        switch (p){
            case 1:
                printf ("vc foi pro leste");
                break;
            case 2:
                printf ("vc foi pro leste e tomou dano");
                break;
            case 3:
                printf ("vc foi pro leste e morreu");
                break;
            }
    }
    if (n3 == 0){
    printf("\nDirecao: %s = %s\n", direcao, direcao);

        switch (p){
            case 1:
                printf ("vc foi pro oeste");
                break;
            case 2:
                printf ("vc foi pro oeste e tomou dano");
                break;
            case 3:
                printf ("vc foi pro oeste e morreu");
                break;
            }
    }
 }
