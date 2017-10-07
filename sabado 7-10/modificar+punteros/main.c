#include <stdio.h>
#include <stdlib.h>
int modificar(int*);
int main()
{
    int flag;
    int y=0;
    flag=modificar(&y);//ingresa a la funcion con & para q me modifique esa dire de memoria
    if(flag)
    {
        printf("numero par\n");
    }
    else
    {
        printf("numero impar\n");
    }

    printf("y=%d!\n",y);
    return 0;
 }
 int modificar (int* a)
 {

     printf("ingrese un numero: ");
     scanf("%d",a);
     if((*a)%2==0)
     {

     return 1;
     }
     else
     {
     return 0;
     }
     //(*a)++;// siempre con parentesis() xq quieor modificar al valor, NO a la dire de memoria
 }
