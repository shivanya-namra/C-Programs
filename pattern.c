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


pattern 11

#include<stdio.h>

int main()
{
        int i,j;
        for(i=1; i <=5; i++)
    {
         for(j=1; j <=3; j++)
    {
        
            printf("%d %d",j,i);
            
        }
        printf("\n");
    }
    return 0;
}

pattern 12

#include<stdio.h>

int main()
{

    int n = 5;
    int i,j;
    int x;

    for(i = 1; i <= n; i++)
    {
        x=i;
        for(j = 1; j <= n; j++)
        {
            printf("%4d",x);
            x += n;
        }
        printf("\n");
    }
    return 0;
}

pattern 13

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

pattern 14

#include<stdio.h>

int main()
{

    int n = 5;
    int i,j;
    int x;

    for(i = 1; i <= n; i++)
    {
        x = n - i + 1;
        for(j = 1; j <= n; j++)
        {
            printf("%4d",x);
            x = x + n;
        }
        printf("\n");
    }
    return 0;
}

code 15

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

code 16

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        int count[26] = {0};

        for (char ch : s)
            count[ch - 'a']++;

        for (char ch : t)
            count[ch - 'a']--;

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0)
                return false;
        }

        return true;
    }
};

code 17

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};

        for(char ch : magazine)
            count[ch - 'a']++;

        for(char ch : ransomNote) {
            if(count[ch - 'a'] == 0)
                return false;
            count[ch - 'a']--;
        }

        return true;
    }
};

code 18

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key, int index) {
    
    if (index == n)
        return -1;

    
    if (arr[index] == key)
        return index;

   
    return linearSearch(arr, n, key, index + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = linearSearch(arr, n, key, 0);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}

code 19

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int result = linearSearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

code 20

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

code 21

#include <stdio.h>

int main() {
    FILE *fp;
    int roll, age;
    char name[50];

    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    fprintf(fp, "Roll Number: %d\n", roll);
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data saved successfully in student.txt\n");

    return 0;
}
