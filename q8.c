#include <stdio.h>
int main() {
    int r = 6 ; 
    float pi = 3.14;
    printf("Radius of circle is %d inches.\n", r);
    printf("Perimeter of circle is %f inches.\n", 2*pi*r);
    printf("Area of circle is %f square inches.\n", pi*r*r);
    return 0;
}