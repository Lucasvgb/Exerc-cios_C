#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas;
    int minutos;
    int segundos;
    int resto;

    printf("Digite o valor dos segundos", segundos);
    scanf("%d",&segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 6;

    printf("%d:%d:%d\n" , horas, minutos, segundos);

    return 0;
}
