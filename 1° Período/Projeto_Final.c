#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

typedef struct {
    int escudo; //espada = 0, dinheiro = 0, sorte = 0, azar = 0,
} itensJogador;

int simounao(void);

int main(void) {
    itensJogador p;
    p.escudo = 0;
    int p0, p1, tamanho = 0, flag = 0, decisao = 0;
    p0 = 0;
    p1 = 0;
    char direcao[6] = {0};

    int n1 = 10, n2 = 10, i = 1; // s = 10, n = 10;
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));
    p0 = (rand() %3) + 1;
    p1 = (rand() %2) + 1;

    printf("Tentativa de alguma coisa!\n");
    printf("==========================================================================================================");
    printf("\nSer�o dadas situa��es e voc� s� pode responder com sim e nao (usados somente em situa��es \n \
e n�o em dire��es), e para dire��es digite norte e sul.\n");
    printf("==========================================================================================================\n");
    printf("\nVoc� se encontra em uma floresta sem lembran�as de absolutamente nada, s� com as roupas do corpo, \n \
e se v� no dilema das possibilidades de dire��o: norte ou sul. Escolha com sabedoria.\n");

    do {
        printf("\n\nEscolha a dire��o :");
        scanf("%s", &direcao);

        n1 = strcmp(direcao,"norte");
        n2 = strcmp(direcao,"sul");

        printf("%d", n1);
        printf("%d", n2);
        if ((n1 == 0) || (n2 == 0)) {
            flag = 1;
        }

    } while (flag == 0);

    if (n1 == 0) {
        printf("\nDirecao: %s\n", direcao);
        switch (p0) {
          case 1:
            do {
                printf ("Voc� foi pro norte e se encontra em um acampamento abandonado com alguns suprimentos largados, \n \
deseja vasculhar para ver se tem alguma coisa de valor? :");
                decisao = simounao();
            } while (decisao == 0);

            if (decisao == 0) {
                p.escudo = 1;
                printf ("Voc� vasculha e acha um escudo! Isso pode ser muito �til durante a aventura, voc� o equipa \n \
e continua a sua jornada\n");
            } else
                printf ("\nVoc� ignora o acampamento e continua andando adiante\n");

            switch (p1) {
            case 1:

                    printf("\nVoc� continua andando e acaba encontrando um jacar� dormindo em uma lagoa. Deseja ser furtivo? Se n�o, \n \
ser� correr o m�ximo poss�vel. (Atacar n�o � uma op��o devido � covardia de atacar um inimigo dormindo!):");
                    decisao = simounao();
                if (decisao == 0) {
                    printf ("\n\nVoc� passa quietinho para tentar deixar o jacar� de boa na lagoa e passa sem maiores problemas.\n");
                } else {
                    printf ("\nVoc� sai corrrendo o mais r�pido que pode e acaba acordando o jacar� e ele acaba te mordendo\n");
                    if (p.escudo == 1) {
                        printf ("\nO jacar� acaba mordendo o seu escudo e por sorte voc� acaba saindo ileso\n");
                        p.escudo = 0;
                    } else {
                        printf ("\nO jacar� te morde arranca sua perna e acaba te comendo, voc� est� morto\n");
                        printf ("\nVoc� perdeu.\n");
                        sleep(2);
                        exit(1);
                    }
                }
                break;
            case 2:
                printf("\ninferno\n");
                break;
            }
            break;
        case 2:
            printf ("vc foi pro norte e tomou dano");
            break;
        case 3:
            printf ("vc foi pro norte e morreu");
            break;
        }
    }
    if (n2 == 0) {
        printf("\nDirecao: %s\n", direcao);

        switch (p0) {
        case 1:
            printf("vc foi pro sul");
            break;
        case 2:
            printf("vc foi pro sul e tomou dano");
            break;
        case 3:
            printf("vc foi pro sul e morreu");
            break;
        }
    }
    return(0);
}

int simounao(void) {
    char simornao[4] = {0};
    // int r = 0, n = 0, r = 0;    // Variavel local ao escopo da funcao simounao()
    int r = 0, s = 0, n = 0, flag = 1;

    do {
            scanf("%s", &simornao);
            s = strcmp(simornao, "sim");
            if (s == 0) {
                flag = 0;
                printf("sim");
                return(0);
            }

            n = strcmp(simornao, "nao");    //Operacao realizada pela funcao
            if (n == 0) {
                flag = 0;
                printf("nao");
                return(1);
            }
    } while (flag == 1);

    return(0);                  //Sempre devolve um componente
}

