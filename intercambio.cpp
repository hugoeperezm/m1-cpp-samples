#include <stdio.h>
int sum; /* Variable global, accesible desde cualquier parte del programa*/

void suma(int x) /* Variable local declarada como parametro accesible*/
                /*solo por la funcion suma*/
{
    sum=sum=x;
    return;
}

void intercambio(int *a, int *b)
{
    if (*a>*b)
    {
        int inter; /*Variable local, accesible dentro de la funcion*/
        inter=*a;
        *a=*b;
        *b=inter;
    }
    return;
}

int main(void) /*Funcion principal del programa*/
{
    int contador, a=9, b=0; /*Variables locales accesibles en main*/

    sum=0;
    intercambio(&a, &b);
    for(contador=a;contador<=b;contador++) suma(contador);
    printf("%d\n", sum);
    return(0);
}