#include <stdio.h>

int main() {
   int num_a, num_b;
   char op;

   printf("\nCalculadora para operacoes basicas [+ - * /]");
   fprintf(stdout, "\nInforme o primeiro valor: ");
   scanf("%d", &num_a);
   getchar();

   fprintf(stdout, "\nInforme o segundo valor: ");
   scanf("%d", &num_b);
   getchar();

   fprintf(stdout, "\nInforme a operacao [+ - * /]: ");
   //scanf("%c", &op);
   op = getchar();
   getchar();

   printf("\nOperacao solicitada: %d %c %d\n", num_a, op, num_b);

   if (op == '+'){
       printf("\nO resultado eh: %d %c %d = %d\n", \
              num_a, op, num_b, num_a + num_b);
   }
   if (op == '-'){
       printf("\nO resultado eh: %d %c %d = %d\n", \
              num_a, op, num_b, num_a - num_b);
   }
   if (op == '*'){
       printf("\nO resultado eh: %d %c %d = %d\n", \
              num_a, op, num_b, num_a * num_b);
   }
   if (op == '/'){
       printf("\nO resultado eh: %d %c %d = %d\n", \
              num_a, op, num_b, num_a / num_b);
   }
}
