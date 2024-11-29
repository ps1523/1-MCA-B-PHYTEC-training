#include <stdio.h>

int main() {
    int score;


    printf("Enter your score (0-100): ");
    scanf("%d", &score);


    if (score >= 90 && score <= 100) {
        printf("Grade: A\n");
    } else if (score >= 80 && score < 90) {
        printf("Grade: B\n");
    } else if (score >= 60 && score < 80) {
        printf("Grade: C\n");
    } else if (score >= 0 && score < 60) {
        printf("Grade: Fail\n");
    } else {
        printf("Invalid score. Please enter a value between 0 and 100.\n");
    }

    return 0;
}

