#include <stdio.h>
#include <stdlib.h>

// Comentarios
/* Verificar se um determinado ano é bissexto. */

int main() {
   int ano;

   printf("\nPrograma para determinar ano bissexto!"); //forma reduzida do fprintf(stdout)
   fprintf(stdout, "\nInforme o ano de referencia: ");

   //fscanf(stdin, "%d", &ano);
   scanf("%d", &ano);
   getchar();


   if (ano % 4) {
      printf("\nO ano %d nao eh bissexto\n", ano);

   } else {
           printf("\nO ano %d eh bissexto\n", ano);
   }
}
