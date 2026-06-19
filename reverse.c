#include<stdio.h>

int main()
{

        int n = 5;
        int i,j;
        int x,y;
    
        for(i = 1; i <= n; i++)
        {
            x=i;
           y = n - i + 1;
            for(j = 1; j <= n; j++)
            {
                if(j % 2 == 1)
                {
                    printf("%2d",x);
                }
                else
                {
                    printf("%2d",y);
                      }
                x = x + n;
                y = y + n;
            }
            printf("\n");
        }
    return 0;
}
