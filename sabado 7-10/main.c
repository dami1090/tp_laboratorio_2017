#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v=8;
    int* p;

    p=&v;//referenciando la puntero, le da algo a lo q apunta.
    // "&" siempre xq quiero guarda la direcc de memoria.

    printf("el * muestra el valor de lo q apunta *p=%d - v=%d\n",*p,v);
    printf("v=%d - &v=%d\n",v,&v);
    printf("v=%p - &v=%p valor en hexa\n",v,&v);//hexa
    printf("p=%d - &p=%d\n",p,&p);
    printf("p=%p - &p=%p valor en hexa\n",p,&p);//hexadecimal
    return 0;
}
