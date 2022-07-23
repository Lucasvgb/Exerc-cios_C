#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int altura;
    int area;

    printf("Digite o valor da base: ", base);
    scanf("%i",&base);

    printf("Digite o valor da altura: " , altura);
    scanf("%i" ,&altura);

    area = base * altura;
    printf("O resultado da area: %i" , area);

    return 0;

}
