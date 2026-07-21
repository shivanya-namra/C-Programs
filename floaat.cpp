#include <stdio.h>

#define SWAP(a, b) \
{                  \
    int temp;      \
    temp = a;      \
    a = b;         \
    b = temp;      \
}

int main()
{
    float x = 10.5, y = 20.8;

    printf("Before Swap:\n");
    printf("x = %.1f, y = %.1f\n", x, y);

    SWAP(x, y);   // Incorrect: macro is designed for int only

    printf("After Swap:\n");
    printf("x = %.1f, y = %.1f\n", x, y);

    return 0;
}
