#include<stdio.h>

int main()
{
    int n = 5,k = 1;
    int i,j;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("%-2d",k++);
        }
        printf("\n");
    }

    return 0;
}
