#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define scanf_s scanf

int main() {
    char name[20];
    printf("name : ");
    scanf_s("%s", name);

    char *temp = malloc(strlen(name) + 2);
    char *name_copy = malloc(strlen(name) + 2);

    for (int i = 0, n = strlen(name); i < n; i++){
        temp[i] = name[i];
    }

    temp[0] = toupper(temp[0]);
    temp[strlen(name)] = '\0';

    printf("name: %s\n", name);
    printf("temp: %s\n", temp);

    strcpy(name_copy, name);
    printf("name_copy: %s\n", name_copy);
    
    free(temp);
    free(name_copy);
    return 0;
}

#include <stdlib.h>

void f(void)
{
    int *x = malloc(10 * sizeof(int));
    x[10] = 0;
}

int main(void)
{
    f();
    return 0;
}