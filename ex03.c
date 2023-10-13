#include <stdio.h>

float x=2.50, y=3.50, z;

int main () {
    z=x;
    x=y;
    y=z;
    printf("X: %.2f\nY: %.2f", x, y);
    return 0;

}