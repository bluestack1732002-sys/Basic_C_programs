#include <stdio.h>
int main() {
    printf("Enter weight of 1st item and how  many purshases made: ");
    float w1, n1;
    scanf("%f %f", &w1, &n1);
    printf("Enter weight of 2nd item and how many purchases made: ");
    float w2, n2;
    scanf("%f %f", &w2,&n2);
    printf("Average weight of items is %f.\n", (w1 + w2)/2);
    printf("Average number of perchases made is %f.\n", (n1 + n2)/2);
    return 0;
}
