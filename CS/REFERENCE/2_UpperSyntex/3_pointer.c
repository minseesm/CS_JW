#include <stdio.h>

int main() {

    int age = 31; // an int variable
    int * ptr = &age;  // A pointer variable, with the name ptr, that stores the address of myAge

    printf("%d", age);  // Outputs the value of myAge (43)
    printf("\n");
    printf("%p", &age); // Outputs the memory address of myAge (0x7ffe5367e044)



    // Output the value of myAge (43)
    printf("%d\n", age);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &age);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);

    // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);

    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n", *ptr);

    return 0;
}

