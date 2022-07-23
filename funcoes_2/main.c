#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float calcularQuadrado(float x, float y);
    float area = calcularQuadrado(15.0,10.0);
    printf("A area do qudrado e: %f",area);

    return 0;
}

float calcularQuadrado(float base, float altura){

    float area = base * altura;

return area;
}
