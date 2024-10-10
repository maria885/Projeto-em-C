#include <stdio.h>


void main() {
    float a = 3.14159, b = 2.71828;

    float aux;
    aux = a;
    a = b;
    b = aux;

    printf("\n PI = %f", b);
    printf("\nEULER = %f", a);
}
