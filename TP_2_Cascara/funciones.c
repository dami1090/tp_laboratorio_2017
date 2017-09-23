#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"

void agregarPer(EPersona lista[],int P)
{
    int i;
    int lugar;
     if (lugar==-1)
    {
        printf("sin espacio para seguir almacenando datos\n");
        return;
    }
    lugar = obtenerEspacioLibre(lista , P);
    for(i=0; i<P ;i++)
    {
        if(lista[i].estado==0)
        {
            printf("ingrese nombre: ");
            fflush(stdin);
            gets(lista[i].nombre);
            printf("ingrese edad: ");
            scanf("%d",&lista[i].edad);
            if(lista[i].edad<0 || lista[i].edad>99)
            {
                printf("\nreingrese la edad: ");
                scanf("%d",&lista[i].edad);
            }
            printf("ingrese dni: ");
            scanf("%d",&lista[i].dni);
            if(lista[i].dni<999999 || lista[i].dni>100000000)
            {
                printf("\nreingrese d.n.i.");
                scanf("%d",&lista[i].dni);
            }
            lista[i].estado=1;
            break;
        }
    }

    if (lugar==-1)
    {
        printf("sin espacio para seguir almacenando datos\n");
        return;
    }
    lugar = obtenerEspacioLibre(lista , P);
}
void borrarPer(EPersona lista[],int P)
{
    int i;
    int auxInt;
    int flag=0;
    char resp;
    printf("ingrese d.n.i. a borrar: ");
    scanf("%d", &auxInt);
    for(i=0;i<P;i++)
    {
        if(auxInt==lista[i].dni)
        {
            flag=1;
            mostrarPer(lista[i]);
            printf("¿esta seguro que desea eliminar persona?");
            resp=getche();
            if(resp=='s')
            {
                printf("\n");
                lista[i].estado=0;
                printf("se a eliminado persona\n");
            }
        else
        {
            printf("no se guardaron cambios\n");
        }
        break;
        }
    }

if(flag==0)
{
    printf("no existe ese d.n.i.\n");
}

}
void mostrarPer(EPersona perso)
{
    printf("d.n.i. %d\t nombre: %s\t edad: %d\t\n",perso.dni,perso.nombre,perso.edad);
}
void mostrarTodasPer(EPersona lista[],int P)
{
    int i;
    for(i=0;i<P;i++)
    {
        if(lista[i].estado==1)
        {
            mostrarPer(lista[i]);

        }
    }
}
void ordenPer(EPersona lista[],int P)
{
    int i , j;
    EPersona auxPer;
    for(i=0;i<P-1;i++)
    {
        for(j=i+1 ; j<P ; j++)
        {
            if(stricmp(lista[i].nombre,lista[j].nombre)>0)
            {
                auxPer=lista[i];
                lista[i]=lista[j];
                lista[j]=auxPer;
            }

        }
    }
   for(i=0;i<P;i++)
    {
        if(lista[i].estado==1)
        {
            mostrarPer(lista[i]);

        }
    }
}

int obtenerEspacioLibre(EPersona lista[], int PER)
{
    int i;
    for(i = 0; i < PER; i++)
    {
        if(lista[i].estado == 0)
        {
            return i;
        }
    }

    return -1;
}
/*int buscarPorDni(EPersona lista[], int P)
{
    int i;
    for(i=0;i<P;i++)
    {
        if(lista[i].dni)
    }
}*/

void graficoEdad(EPersona lista[], int PER)
{
    int i;
    int menores=0;
    int jovenes=0;
    int mayores=0;
    int flag = 0;
    int max;
    for (i = 0; i < PER; i++)
    {
        if (lista[i].estado)
        {
            if (lista[i].edad < 18)
            {
                menores++;
            }
            else if ((lista[i].edad > 18 && lista[i].edad < 35))
            {
                jovenes++;
            }
            else if (lista[i].edad > 35)
            {
                mayores++;
            }
        }
    }

    if (menores >= jovenes && menores >= mayores)
    {
        max = menores;
    }
    else
    {
        if (jovenes >= menores && jovenes >= mayores)
        {
            max = jovenes;
        }
        else
        {
            max = mayores;
        }
    }

    for (i = max; i > 0; i--)
    {
        if (i < 10)
        {
            printf("%02d|", i);
        }
        else
            printf("%02d|", i);

        if (i <= menores)
        {
            printf("*");
        }
        if (i <= jovenes)
        {
            flag = 1;
            printf("\t*");
        }
        if (i <= mayores)
        {
            if (flag == 0)
                {
                    printf("\t\t*");
                }
            if (flag == 1)
                {
                printf("\t*");
                }
        }

        printf("\n");
    }
    printf("--------------------");
    printf("\n  <18\t19-35\t>35");
    printf("\n   %d\t%d\t%d\n", menores, jovenes, mayores);
}

