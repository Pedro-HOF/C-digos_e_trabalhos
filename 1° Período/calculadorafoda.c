#include <stdio.h>

int main() {
   float num_a, num_b, resultado;
   char op;

   printf("\nCalculadora para operacoes basicas [+ - * /]");
   fprintf(stdout, "\nInforme o primeiro valor: ");
   scanf("%f", &num_a);
   getchar();

   fprintf(stdout, "\nInforme o segundo valor: ");
   scanf("%f", &num_b);
   getchar();

   fprintf(stdout, "\nInforme a operacao [+ - * /]: ");
   //scanf("%c", &op);
   op = getchar();
   getchar();

   printf("\nOperacao solicitada: %f %c %f\n", num_a, op, num_b);

   if (op == '+'){
      resultado = num_a + num_b;
   }
   if (op == '-'){
       resultado = num_a - num_b;
   }
   if (op == '*'){
       resultado = num_a * num_b;
   }
   if (op == '/') {
         if(num_b != 0) {
        resultado = num_a / num_b;
       } else {
            printf("\nDivisao por zero!\n");
            //exit(1);
       }
   }
   printf("\nO resultado e: %.2f %c %.2f = %.3f\n", \
          num_a, op, num_b, resultado);
}

