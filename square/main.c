#include <stdio.h>

int main() {
    int edge;
    printf("Enter your edge: \n");
    scanf("%d", &edge);

    int area = edge * edge;
    int perimeter = edge * 4;

    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);

    return 0;
}
