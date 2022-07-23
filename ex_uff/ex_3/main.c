#include <stdio.h>
#include <stdlib.h>

void main()
{
    float valor_1;
    float valor_2;
    char operacao;
    float resultado;

    printf("Diga qual operacao deseja: (+; -; /; *;):");
    scanf("%c",&operacao);

    printf("/nInforme o primeiro valor: ");
    scanf("%f",&valor_1);

    printf("/nInforme o segundo valor: ");
    scanf("%i",valor_2);

    switch(operacao)
    {
        case '+': resultado = valor_1 + valor_2;
                  break;
        case '-': resultado = valor_1 - valor_2;
                  break;
        case '/': resultado = valor_1 / valor_2;
                  break;
        case '*': resultado = valor_1 * valor_2;
                  break;
    }


    printf("\n %2.2f %c %2.2f = %2.2f", valor_1, operacao, valor_2, resultado);
    printf("\n\n\n");



    return 0;


}
