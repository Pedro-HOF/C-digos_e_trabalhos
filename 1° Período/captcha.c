#include <stdio.h>
#include <string.h>
#include <windows.h>

main()
{
    char captcha [7], sequencia [7];
    int i;
    printf ("Gerando um CAPTCHA de 6 caracteres...\n");
    srand (time(NULL));
    for (i = 0; i < 6; i++)
    {
        captcha [i] = (rand() % 26) + 65;
        printf ("%c", captcha[i]);
        Sleep(1000);
    }
    captcha [i] = '\0';
    printf("\n\nCaptcha gerado = %s\n\n", captcha);
    printf("Digite uma sequencia =");
    scanf("%s", sequencia);
    printf("Sequencia digitada = %s\n\n", sequencia);
    if (strcmp(captcha, sequencia) == 0)
    {
        printf("\nCaptcha validado e acesso autorizado!\n\n");
    }
    else
    {
        printf("\nCaptcha invalido e acesso negado!\n\n");
    }
}
