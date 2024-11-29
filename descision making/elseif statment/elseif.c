#include <stdio.h>

int main() {
    int x = 7;

    if (x > 10) {
        printf("x is greater than 10\n");
    } else if (x > 5) {
        printf("x is greater than 5 but less than or equal to 10\n");
    } else {
        printf("x is 5 or less\n");
    }

    return 0;
}

