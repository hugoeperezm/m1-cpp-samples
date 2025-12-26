#include <stdio.h>

void imprimir(char **puntero);

int main() {
    char *cadena[] = {"Ejercicio", "del", "temario", "de", "recursividad", NULL};
    imprimir(cadena);
    return 0;
}

void imprimir(char **pun) {
    if (*pun == NULL) return;
    pun++;
    printf ("%s ", *pun);
    imprimir(pun);
    
}