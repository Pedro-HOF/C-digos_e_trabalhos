#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int pn, pl, po;
    pn = 0;
    pl = 0;
    po = 0;

    char direcao[6];
    char norte[6] = "norte";

    /*printf("Tentativa de alguma coisa!\n");
    printf("==========================================================================================================");
    printf("\nSer�o dadas situa��es e voc� s� pode responder s para sim e n para n�o (usados somente em situa��es \n \
e n�o em dire��es), e para dire��es N para norte, L para leste, O para oeste.");*/
    srand(time(NULL));

    printf("\n\nEscolha a dire��o :");
    scanf("%s", &direcao);
    pn = (rand() %3) + 1;
    printf("%d", pn);

    if (strcmp(direcao, norte))
        {
        if (pn == 1)
        printf ("vc foi pro norte");
        else{
            if (pn == 2)
            printf ("vc foi pro norte e deu o cu");
            else{
                if (pn == 3)
                printf ("vc foi pro norte e morreu");
                else
                    printf("vai se fude");
            }
        }
    }



    /*srand(time(NULL));
    pn = (rand() %3) + 1;
    pl = (rand() %3) + 1;
    po = (rand() %3) + 1;

    if (pn == 1)
        printf ("vc foi pro norte");
    if (pn == 2)
        printf ("vc foi pro norte e deu o cu");
    if (pn == 3)
        printf ("vc foi pro norte e morreu");*/
 }
