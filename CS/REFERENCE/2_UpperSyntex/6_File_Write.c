#include <stdio.h>
#define scanf_s scanf

int main(void)
{
    FILE *file = fopen("memo.csv", "a");

    char name[20];
    char number[20];
    printf("Name : ");
    gets(name);
    printf("Number : ");
    gets(number);


    fprintf(file, "%s,%s\n", name, number);
    fclose(file);

}

