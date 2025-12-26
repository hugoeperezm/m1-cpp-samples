#include <stdio.h>

void char_recursivo(char **pun);

int main() {
    char *nom[20] = {"El", "dia", "de", "hoy", "es", "lunes", NULL};
    char_recursivo(nom);
    return 0;
}

void char_recursivo(char **pun) {
    if (*pun == NULL) return;
    
    char_recursivo(pun + 1);
    printf("%s ", *pun);
}