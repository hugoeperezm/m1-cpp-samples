#include <iostream>
using namespace std;

int main() {
    int x = 99;
    int *p = &x;

    cout << "Valor de x: " << x << endl;
    cout << "Direccion de x (&x): " << &x << endl;
    cout << "Contenido del puntero p: " << p << endl;
    cout << "Contenido al que apunta (*p): " << *p << endl;
}