#include <stdio.h>

void main()
{
    char *s = "hello"; // Pointer s points to the string "hello"
    char *p = s;       // Pointer p points to the same string "hello"

    printf("%c\t%c", *(p + 1), s[1]); // Print the characters at index 1 in two different ways
}
// #include <stdio.h>

// int main() {
//     char *s = "hello";

//     printf("Size of *s: %zu bytes\n", sizeof(*s));
//     int length=strlen(s);
//     printf("%d",length);
//     return 0;
// }