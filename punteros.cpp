#include <iostream>
using namespace std;

int main(){
    double precio1, precio2, precio3, precio4, precio5;
    double *precios_venta[] = {&precio1, &precio2, &precio3, &precio4, &precio5};

    *precios_venta[0]= 100.15;
    *precios_venta[1]= 200.24;  
    *precios_venta[2]= 314.15;  
    *precios_venta[3]= 421.15;
    *precios_venta[4]= 574.14;

    printf("El precio1 es: %f\n", precio1);
    printf("El precio2 es: %f\n", precio2);
    printf("El precio3 es: %f\n", precio3);
    printf("El precio4 es: %f\n", precio4);
    printf("El precio5 es: %f\n", precio5);

    return 0;
}