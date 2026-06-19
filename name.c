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
