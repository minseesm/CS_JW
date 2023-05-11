#include <stdio.h>
#define scanf_s scanf

int main() {
    int age = 0;

    printf("Input your age : ");
    scanf_s("%d", &age);                   

    if (age >= 16) {                            //    > < >= <= ==   || : OR         && : AND         ! : not
        printf("You can get Driver licence\n");
    }
    else {
        printf("You are so young.\n");
    }

    printf("-------------\n");
    printf("- [1] Cola  -\n");
    printf("- [2] Cider -\n");
    printf("- [3] Water -\n");
    printf("-------------\n");

    int select = 0;
    scanf_s("%d", &select);

    switch (select)
    {
    case 1:
        printf("\nHere a can of Cola");
        break;
    case 2:
        printf("\nHere a can of Cider");
        break;                          // continue
    case 3:
        printf("\nHere a bottle of Water");
        break;
    default:
        break;
    }

    return 0;
}