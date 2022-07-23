#include <stdio.h>
#include <stdio.h>

int main()
{
  int i;
  printf("Digite um numero de 1 a 5:  ");
  scanf("%i", &i);

  switch(i){
    case 1 :
        printf("numero 1\n");
        break;
    case 2 :
        printf("numero 2\n");
        break;
    case 3 :
        printf("numero 3\n");
        break;
    case 4 :
        printf("numero 4\n");
        break;
    case 5 :
        printf("numero 5\n");
        break;

    default:
        printf("numeros incorretos");

  }
  return 0 ;
}
