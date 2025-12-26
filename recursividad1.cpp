#include <stdio.h>
unsigned long factorial_recursivo(int);
unsigned long factorial_iterativo(int);
int main() {
    int numero;
    unsigned long fact_recursivo, fact_iterativo;

    do
    {
        printf("Ingrese un numero positivo, que sea menor que 12: ");
        scanf("%d", &numero);
    } while (numero < 0 || numero > 12); //el factorial de 13 supera la capacidad de unsigned long
    //factorial(13) se desborda en unsigned long

        fact_recursivo = factorial_recursivo(numero);
        fact_iterativo = factorial_iterativo(numero);

        //mostrar ambos resultados
        printf("\nUsando recursividad: factorial(%d) = %lu\n", numero, fact_recursivo);
        printf("\nUsando iteracion: factorial(%d) = %lu\n", numero, fact_iterativo);
    
    return 0;
}

unsigned long factorial_recursivo(int n) //funcion recursiva
{
    if (n == 0)
        return 1;
    else
        return n * factorial_recursivo(n - 1);
}

unsigned long factorial_iterativo(int n) //funcion iterativa
{
    unsigned long res = 1;
    for (int i = n; i > 1; i--)
        res *= i;
    return res;
}