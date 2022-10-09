#include <stdio.h>
typedef char* ptr;
#define PTR char*
#define CBE "coimbatore"
int main()
{
    ptr a, b, c;
    PTR x, y, z;
    printf("sizeof a:%zu\n" ,sizeof(a) );
    printf("sizeof b:%zu\n" ,sizeof(b) );
    printf("sizeof c:%zu\n" ,sizeof(c) );
    printf("sizeof x:%zu\n" ,sizeof(x) );
    printf("sizeof y:%zu\n" ,sizeof(y) );
    printf("sizeof z:%zu\n" ,sizeof(z) );
    printf(CBE);
    return 0;
}