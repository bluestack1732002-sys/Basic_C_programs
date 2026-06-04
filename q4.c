#include <stdio.h>
int main() {
    printf("  ");
    for (int i = 1; i <= 7; i++) {
        printf("#", i);
    }
    for (int j = 1; j <= 7; j++) {
            printf("#\n",j);
            if (j == 3){
                for (int k = 1; k <= 6; k++) {
                    printf("#", k);
                };
            }
        }
    printf("\n");    


    printf("  ");

    for (int i = 1; i <= 6; i++) {
        printf("#", i);
    }
    
    printf(" \n");
    for (int j = 1; j <= 6; j++) {
        if (j == 3){
            printf(" ");
        }
        else{
        printf("#",j);
        }
    }
    for (int k = 1; k <= 5; k++) {
        printf("#\n", k);
    }
    printf(" ");
    for (int i = 1; i <= 5; i++) {
        printf("#", i);
        if (i == 3){
            printf(" ");
        }
    }

    return 0;
}