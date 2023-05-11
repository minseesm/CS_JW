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
    printf("- [4] exit  -\n");
    printf("-------------\n");
    int select = 0;

    while (!(select == 4)) {
        scanf_s("%d", &select);
        switch (select)
        {
        case 1:
            printf("\nHere a can of Cola\n");
            break;
        case 2:
            printf("\nHere a can of Cider\n");
            break;                          // continue
        case 3:
            printf("\nHere a bottle of Water\n");
            break;
        case 4:
            printf("\nLoop Escape !!\n");
            break;
        default:
            break;
        }
    }
    int i;
    for (i=0;i<3;i++) {
        printf("%d\n", i);
    }

    return 0;
}