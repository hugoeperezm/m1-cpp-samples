#include <stdio.h>

using namespace std;

int main()
{
    int var1, var2;
    printf("Introduzca dos números enteros: ");
    scanf("%d%d", &var1,&var2);
    if (var1%var2 == 0)
        printf("%d es divisible por %d\n", var1, var2);
    else {
        printf("%d no es divisible por %d\n", var1, var2, var1%var2);
    }
}