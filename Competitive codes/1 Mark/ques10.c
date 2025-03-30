#include <stdio.h>
 
int main()
{
    char a = 0xfb;
    unsigned char b = 0xfb;
 
    printf("a = %d", a);
    printf("\nb = %d", b);
 
    if (a == b)
      printf("\nSame");
    else
      printf("\nNot Same");
    return 0;
}