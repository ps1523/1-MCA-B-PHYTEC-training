#include <stdio.h>

int main() {
    int x = 6, y = 8;

    if (x > 5 && y > 5) {
        printf("Both x and y are greater than 5\n");
    }

    if (x > 5 || y < 5) {
        printf("Either x is greater than 5 or y is less than 5\n");
    }

    return 0;
}

