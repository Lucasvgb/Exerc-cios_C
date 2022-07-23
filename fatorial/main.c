#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fatorial ;
   printf("digite o valor: ");
   scanf("%i",&fatorial);
   int resposta = 1;

   for( ; fatorial>= 1; --fatorial){
        resposta *= fatorial; // resposta = resposta * fatorial

   }
    printf("o numero fatorial e %i/n",resposta);

    return 0;
}
