pattern 1

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

pattern 2

#include<stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}

pattern 3

#include<stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

pattern 4

#include<stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}

pattern 5 

#include<stdio.h>

int main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = 5; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

pattern 6

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

pattern 7

#include<stdio.h>

int main()
{
        int n=5;
        int i,j;
        int x = 1;
        for(i=1; i <=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%4d",x);
            x += 2;
        }
        printf("\n");
    }
    return 0;
}

pattern 8



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

pattern 9

#include<stdio.h>

int main()
{
        int n=5;
        int i,j;
       
        for(i=1; i <=n; i++)
    {
         for(j=1; j <=n; j++)
    {
        
            printf("%2d",i*j);
            
        }
        printf("\n");
    }
    return 0;
}

pattern 10


#include<stdio.h>

int main()
{

        int i,j;
       
        for(i=1; i <=5; i++)
    {
         for(j=1; j <=3; j++)
    {
        
            printf("%d %d",i,j);
            
        }


