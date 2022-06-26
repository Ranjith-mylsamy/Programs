#include <iostream>
#include <string.h>
using namespace std;
char subString (char s[], char sub[], int p, int j)
{
  int c = 0;
  while (c < j)
    {
      sub[c] = s[p + c];
      c++;
    }
  return sub[c] = '\0';
}
int main ()
{

  char a[10] = "code", b[10];
  int l = strlen (a);

  for (int i = 0; i < l; i++)
    {
      for (int j = 0; j <= l - i; j++)
 {
   subString (a, b, i, j);
   cout << b <<'\n';
 }
    }
}