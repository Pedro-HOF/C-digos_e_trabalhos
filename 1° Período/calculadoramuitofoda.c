#include <stdio.h>
#include <stdlib.h> //necessario para o exit()

//fazer o negocio inteiro dentro do while e perguntar se quer fazer outra conta

// Tipo do retorno: float
// Nome da funcao: soma
// Parametros: duas variaveis do tipo float

// Prototipo da funcao soma, subtracao, multiplicacao, divisao
float soma(float, float);
float subtracao(float, float);
float multiplicacao(float, float);
float divisao(float, float);

char operador(void);

float soma(float a, float b) {
    float r;                    //Variavel local ao escopo da funcao soma()
    r = a + b;                  //Operacao realizada pela funcao
    return(r);                  //Sempre devolve um componente
}

float subtracao(float a, float b) {
    return(a - b);                  //Sempre devolve um componente
}

float multiplicacao(float a, float b) {
    return(a * b);                  //Sempre devolve um componente
}

float divisao(float a, float b) {
    if(b != 0) {
        return(a / b);
       }
       printf("\nDivisao por zero!\n");
       //EXIT_FAILURE eh igual ao valor 1
       //Falling exit status
       exit(1);
}

//fazer de tarefa virar um loop e conseguir fazer outra operacao

char operador(void) {
    char op = 1;
    do {
        fprintf(stdout, "\nInforme a operacao [+ - * /]: ");
        //scanf("%c", &op);
        op = getchar();     // Esse getchar eh necessario para consumir o ENTER que perm
        getchar();

        switch(op) {
            case '+':       //ou da pra usar "case 43:" que eh o simbolo na tabela ASCII
            case '-':
            case '*':
            case '/':
                break;
            default:
                printf("\nA operacao %c eh invalida!\n", op);
                op = 0;
                //break;                               //eh opcional
            }
        } while (op == 0);
        return(op);
}

        /*if ((op != '+') && (op != '-') && (op != '*') && (op != '/')) {
            printf("\nOperacao invalida!\n");
            sair = 1;
        } else
            sair = 0;*/

int main() {
   float num_a, num_b, resultado;
   char op;
   int sair = 0;

   printf("\nCalculadora para operacoes basicas [+ - * /]");
   fprintf(stdout, "\nInforme o primeiro valor: ");
   scanf("%f", &num_a);
   getchar();           // Elimina o valor da tecla enter do buffer de entrada

   fprintf(stdout, "\nInforme o segundo valor: ");
   scanf("%f", &num_b);
   getchar();

   /*fprintf(stdout, "\nInforme a operacao [+ - * /]: ");
   //scanf("%c", &op);
   op = getchar();
   getchar();*/

   // Obrigar o usuario digitar um operador valido
        fprintf(stdout, "\nInforme a operacao [+ - * /]: ");
        //scanf("%c", &op);
        op = getchar();
        getchar();

   printf("\nOperacao solicitada: %f %c %f\n", num_a, op, num_b);

   if (op == '+'){
      //resultado = num_a + num_b;
      resultado = soma(num_a, num_b);
   }
   if (op == '-'){
      //resultado = num_a - num_b;
      resultado = subtracao(num_a, num_b);
   }
   if (op == '*'){
      //resultado = num_a * num_b;
      resultado = multiplicacao(num_a, num_b);
   }
   if (op == '/') {
/*       if(num_b != 0) {
        resultado = num_a / num_b;
       } else {
            printf("\nDivisao por zero!\n");
            //EXIT_FAILURE eh igual ao valor 1
            //Falling exit status
            exit(1);
       }*/
       resultado = divisao(num_a, num_b);
   }

   printf("\nO resultado e: %.2f %c %.2f = %.3f\n", \
          num_a, op, num_b, resultado);
}
