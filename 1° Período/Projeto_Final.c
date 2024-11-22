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
    printf("\nSerão dadas situações e você só pode responder com sim e nao (usados somente em situações \n \
e não em direções), e para direções digite norte e sul.\n");
    printf("==========================================================================================================\n");
    printf("\nVocê se encontra em uma floresta sem lembranças de absolutamente nada, só com as roupas do corpo, \n \
e se vê no dilema das possibilidades de direção: norte ou sul. Escolha com sabedoria.\n");

    do {
        printf("\n\nEscolha a direção :");
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
                printf ("Você foi pro norte e se encontra em um acampamento abandonado com alguns suprimentos largados, \n \
deseja vasculhar para ver se tem alguma coisa de valor? :");
                decisao = simounao();
            } while (decisao == 0);

            if (decisao == 0) {
                p.escudo = 1;
                printf ("Você vasculha e acha um escudo! Isso pode ser muito útil durante a aventura, você o equipa \n \
e continua a sua jornada\n");
            } else
                printf ("\nVocê ignora o acampamento e continua andando adiante\n");

            switch (p1) {
            case 1:

                    printf("\nVocê continua andando e acaba encontrando um jacaré dormindo em uma lagoa. Deseja ser furtivo? Se não, \n \
será correr o máximo possível. (Atacar não é uma opção devido à covardia de atacar um inimigo dormindo!):");
                    decisao = simounao();
                if (decisao == 0) {
                    printf ("\n\nVocê passa quietinho para tentar deixar o jacaré de boa na lagoa e passa sem maiores problemas.\n");
                } else {
                    printf ("\nVocê sai corrrendo o mais rápido que pode e acaba acordando o jacaré e ele acaba te mordendo\n");
                    if (p.escudo == 1) {
                        printf ("\nO jacaré acaba mordendo o seu escudo e por sorte você acaba saindo ileso\n");
                        p.escudo = 0;
                    } else {
                        printf ("\nO jacaré te morde arranca sua perna e acaba te comendo, você está morto\n");
                        printf ("\nVocê perdeu.\n");
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

