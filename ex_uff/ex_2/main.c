#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiro_valor, segundo_valor, tercerio_valor , MaiorValor, MenorValor;
    printf("Digite os tres valores: ");
    scanf("%d%d%d", &primeiro_valor,&segundo_valor,&tercerio_valor);
    if(primeiro_valor<segundo_valor ){
        if(primeiro_valor<tercerio_valor)
            MenorValor = primeiro_valor;
        else
            MenorValor = tercerio_valor;
    }
    else{
        if(segundo_valor<tercerio_valor)
            MenorValor = segundo_valor;
        else
            MenorValor = tercerio_valor;
    }
    if(primeiro_valor>segundo_valor){
        if(primeiro_valor>tercerio_valor)
            MaiorValor = primeiro_valor;
        else
            MaiorValor = tercerio_valor;
    }
    else{
        if(segundo_valor>tercerio_valor)
            MaiorValor = segundo_valor;
        else
            MaiorValor = terceiro;
    }
    printf("MenorValor: %d\tMaiorValor: %d\n" , MenorValor, MaiorValor );

















    return 0;
}
