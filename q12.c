#include <stdio.h>
int main() {
    printf("Enter your id: ");
    int id;
    scanf("%d", &id);
    printf("Enter total work hours of the month June: ");
    float hours;
    scanf("%f", &hours);
    printf("Enter your salary amount received per hour: ");
    float salary;
    scanf("%f", &salary);
    printf("Your id is %d.\n", id);
    printf("Your salary of the month June is %.2f rupees.\n", hours*salary);
    return 0;
}