#include <stdio.h>
#include <stdlib.h>

int epar(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


 main()
 {

    int num;
    printf("digite um numero: ");
    scanf("%d",&num); // & operador de endereço.

    if(epar(num) == 1)
    {
        printf("**NUMERO PAR\n");
    }
    else
    {
        printf("**NUMERO IMPAR\n");
    }

    return 0;
}
