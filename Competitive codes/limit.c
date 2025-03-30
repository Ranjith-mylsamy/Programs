#include <stdio.h>
#include <limits.h>

int main() {
    int x = INT_MAX; // maximum value for a signed int
    printf("x = %d\n", x);
    x = x + 1; // integer overflow
    printf("x + 1 = %d\n", x);
    return 0;
}
