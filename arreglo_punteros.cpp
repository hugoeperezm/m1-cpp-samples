#include <iostream>
using namespace std;

int main() {
    double a = 1.1, b = 2.2, c = 3.3, d = 4.4, e = 5.5;

    // Arreglo de punteros a double
    double *arreglo[5] = { &a, &b, &c, &d, &e };

    for (int i = 0; i < 5; i++) {
        cout << *arreglo[i] << " ";  // imprime los valores 1.1 2.2 3.3 4.4 5.5
    }
}