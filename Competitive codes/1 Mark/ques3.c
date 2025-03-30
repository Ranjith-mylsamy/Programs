#include <stdio.h>

int main() {
    int i = 10;
    int *p;
    int **ptr; // Changed the variable name to ptr

    p = &i;
    ptr = &p; // Assign the address of the pointer p to ptr

    printf("Value of i: %d\n", i); // Output: Value of i: 10
    printf("Address of p: %p\n", p); // Output: Address of p: <memory_address_of_i>
    printf("Value of p: %d\n", *p); // Output: Value of p: 10
    printf("Address of ptr: %p\n", ptr); // Output: Address of ptr: <memory_address_of_p>
    printf("Value of ptr: %p\n", *ptr); // Output: Value of ptr: <memory_address_of_i>
    printf("Value pointed to by ptr: %d\n", **ptr); // Output: Value pointed to by ptr: 10

    return 0;
}
