#include <stdio.h>
int main() {
    printf("Enter number of days : ");
    int days;
    scanf("%d", &days);
    int years;
    years = days/365;
    int week, remaining_days;
    remaining_days = days%365;
    week = remaining_days/7;
    int remaining_days1;
    remaining_days1 = remaining_days%7;
    printf("%d Years, %d Weeks, %d Days\n", years, week, remaining_days1);
    return 0;
}