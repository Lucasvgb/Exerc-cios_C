#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota_1,nota_2,nota_3,media;

    printf("Digite a nota 1: ");
    scanf("%f",&nota_1);

    printf("Digite a nota 2: ");
    scanf("%f",&nota_2);

    printf("Digite a nota 3: ");
    scanf("%f",&nota_3);

    return 0;

}

    void media_Notas(void) {


    media_Notas = (nota_1 + nota_2 + nota_3) / 3;
    printf("A media do aluno = %.1f\n",media);

    if(media_Notas >= 7){
        printf("aprovado");
    }
    else{
        printf("reprovado");
    }

    }





