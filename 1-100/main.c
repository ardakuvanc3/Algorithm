#include <stdio.h>

int main()
{
    int total = 0;

    for(int i = 0; i <= 100; i++){
        total += i;
    }
    printf("%d\n", total);

    return 0;
}
