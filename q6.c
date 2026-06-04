#include <stdio.h>
int main() {
    char x = 'X', y = 'M', z = 'L';
    printf("Test characters: '%c', '%c', '%c'\n", x, y, z);
    char temp = x;
    x = z;
    z = temp;
    printf("The reverse of XML is %c%c%c.\n", x, y, z);
    return 0;
}