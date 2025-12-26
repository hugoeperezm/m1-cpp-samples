#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int *p = &x;     // p apunta a x
    int **pp = &p;   // pp apunta al puntero p (apuntador de apuntadores)

    cout << "Valor de x: " << x << endl;
    cout << "Acceso con *p: " << *p << endl;
    cout << "Acceso con **pp: " << **pp << endl; // doble indirección

    return 0;
}