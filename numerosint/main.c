#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_1, numero_2;
    printf("digite 2 numeros inteiros:\n ");
    scanf("%i %i",&numero_1,&numero_2);

    if (numero_2 == 0 )
        printf("Divisao nao permitida.\n");
    else{
        if (numero_1 % numero_2 == 0)    // "%" significa o resto da divisão
            printf("%i e divisivel por %i.\n", numero_1, numero_2);
        else
            printf("%i nao e divisivel por %i.\n", numero_1, numero_2);



    }

    return 0;
}
