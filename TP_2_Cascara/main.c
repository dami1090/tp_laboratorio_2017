#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define PER 20

int main()
{
    EPersona listaPersonas[PER];
    int i;
    for(i=0;i<PER;i++)
    {
        listaPersonas[i].estado=0;
    }
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                agregarPer(listaPersonas,PER);
                break;
            case 2:
                borrarPer(listaPersonas,PER);
                break;
            case 3:
                ordenPer(listaPersonas,PER);
                break;
            case 4:
                graficoEdad(listaPersonas,PER);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
