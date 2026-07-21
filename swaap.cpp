#include <stdio.h>

#define SWAP(a, b)      \
{                       \
    int temp = a;       \
    a = b;              \
    b = temp;           \
}

int main()
{
    int x = 10, y = 20;

    printf("Before Swap:\n");
    printf("x = %d, y = %d\n", x, y);

    SWAP(x, y);

    printf("After Swap:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
