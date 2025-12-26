#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* p = &x;
    int** pp = &p;

    cout << "Valor de x: " << x << endl;
    cout << "Direccion de x (&x): " << &x << endl;

    cout << "\nContenido de p (direccion de x): " << p << endl;
    cout << "Valor al que apunta p (*p): " << *p << endl;
    cout << "Direccion de p (&p): " << &p << endl;

    cout << "\nContenido de pp (direccion de p): " << pp << endl;
    cout << "Valor al que apunta pp (*pp): " << *pp << endl;
    cout << "Valor al que apunta *pp (**pp): " << **pp << endl;

    return 0;
}
