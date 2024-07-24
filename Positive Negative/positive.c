#include <stdio.h>

int main() {
    int number;

    printf("Enter number: ");
    if (scanf("%d", &number) == 1) {
        if (number > 0) {
            printf("Your Number is Positive");
        } else if (number < 0) {
            printf("Your Number is Negative");
        } else {
            printf("Your number is Zero");
        }
    } else {
        printf("Invalid input");
    }

    return 0;
}
