#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Digite sua idade");
    scanf("i%",&idade);

    if (idade < 18){
        printf("Pode beber");
    } else
        printf("nao pode beber");


    return 0;
}
