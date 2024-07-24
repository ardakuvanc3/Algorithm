#include <stdio.h>

int main() {
    int number;

    printf("Enter number: ");
    if (scanf("%d", &number) == 1) {
        if (number % 2 == 0) {
            printf("Your Number is Odd");
        }
        else {
            printf("Your number is Even");
        }
    } else {
        printf("Invalid input");
    }

    return 0;
}
