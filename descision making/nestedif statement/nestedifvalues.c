#include <stdio.h>

int main() {
    int number;

   
    printf("Enter an integer: ");
    scanf("%d", &number);


    if (number > 0) {
        printf("The number is positive.\n");
        if (number % 2 == 0) {
            printf("It is an even number.\n");
        } else {
            printf("It is an odd number.\n");
        }
    } else if (number < 0) {
        printf("The number is negative.\n");
        if (number % 2 == 0) {
            printf("It is an even number.\n");
        } else {
            printf("It is an odd number.\n");
        }
    } else { // number == 0
        printf("The number is zero.\n");
        printf("Zero is neither even nor odd.\n");
    }

    return 0;
}

