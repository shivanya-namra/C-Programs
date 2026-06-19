#include<stdio.h>

int main()
{
        int n = 5;
        int i,j;
        int x = 2;

        for(i=1; i <=n; i++)
    {
        for(j = 1; j <=n; j++)
        {
            printf("%4d",x);
            x += 2;
        }j 
        printf("\n");
    }
    return 0;
}
