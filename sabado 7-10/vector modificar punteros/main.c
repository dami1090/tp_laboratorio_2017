#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int modificar(int*,int);
int mostrarvector(int*,int);

int main()
{
    int vector[5]={74,25,55,71,40};
    int* punt;
    punt=vector;
    modificar(punt,TAM);
    mostrarvector(vector,TAM);


    printf("Hello world!\n");
    return 0;
}

int modificar(int* punt,int t )
{
    int i;
    for(i=0;i<t;i++)
    {
        printf("posicion del puntero %d valor del puntero  %d\n",i,punt[i]);
        printf("posicion donde apunta el puntero en memoria %d\n",*punt[i]);
        printf("posicion real de el puntero en memoria %d\n",&punt[i]);


    }

}
int mostrarvector(int* vector,int t)
 {
     int i;
    for(i=0;i<t;i++)
    {
        printf("posicion del vector %d valor del vector  %d\n",i,vector[i]);
        printf("posicion del vector en memoria %d\n",&vector[i]);

    }
 }
