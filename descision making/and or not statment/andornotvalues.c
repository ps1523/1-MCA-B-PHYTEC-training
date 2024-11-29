#include <stdio.h>

int main() {
    int number;


    printf("Enter an integer: ");
    scanf("%d", &number);


    if (number >= 10 && number <= 50) {
        printf("The number is between 10 and 50 (inclusive).\n");
    } else if (number < 10 || number > 50) {
        printf("The number is outside the range of 10 to 50.\n");
    } else {
        printf("Invalid input.\n");
    }


    if (number > 0 && number % 2 == 0) {
        printf("The number is positive and even.\n");
    }


    if (number < 0 || number % 2 != 0) {
        printf("The number is either negative or odd.\n");
    }

    return 0;
}

