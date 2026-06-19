// compare two number

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if(a > b)
        printf("A is greater");
    else if(a < b)
        printf("B is greater");
    else
        printf("Both are equal");

    return 0;
}
