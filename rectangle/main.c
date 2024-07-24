#include <stdio.h>

int main() {
    int longEdge;
    int shortEdge;
    printf("Enter your long edge: \n");
    scanf("%d", &longEdge);

    printf("Enter your short edge: \n");
    scanf("%d", &shortEdge);


    int area = longEdge * shortEdge;
    int perimeter = 2*(longEdge + shortEdge);

    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);

    return 0;
}
