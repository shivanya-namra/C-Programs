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
    int x = 10, y = 20;

    printf("Before Swap: x = %d, y = %d\n", x, y);

    SWAP(x, y);

    printf("After Swap: x = %d, y = %d\n", x, y);

    return 0;
}
