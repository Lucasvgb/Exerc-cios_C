#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    TIPOS DE VARIÁVEIS
    1) char - 1 byte ou seja, 8 bits
    2) int - 2 bytes
    3) float -  4 bytes
    4) void - vazio
    5) double - 8 bytes - ponto flutuante duplo,mais precisão para armazenar grandes numeros ex: num com 15 casas decimais

    VALORES FORMATADOS
    Exemplo: printf("tipo_de_saida", valor_a_ser_impresso);
    Exemplo :printf(%tipo1 %tipo2, var1, var2);
*/
    //int num = 555;
    //printf("%int\n" , num);

    //float f = 6.2;
    //printf("%f\n" , f);

    // inteiro %i ou %d
    // float ou double %ff
    // char %c
    // string %s

    int x = 10;
    printf("%i\n", x);

    float ff = 10.5;
    printf("%f\n" , ff);

    printf("%i - %f \n" , x , ff );









    return 0;
}
