#include <stdio.h>

int main()
{
    int numero_1,numero_2,numero_3,soma;
    printf("Digite os tres valores.\n");
    scanf("%d %d %d",&numero_1, &numero_2,&numero_3);
    soma = numero_1 + numero_2 + numero_3 ;

    printf("o valor da soma = %d\n", soma);

    return 0;
}
