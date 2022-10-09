#include <stdio.h>
#include <string.h>

int isPalindrome(char* str)
{
	int l = 0;
	int h = strlen(str) - 1;

	while (h > l)
	{
		if (str[l++] != str[h--])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
    char a[5]={'l','e','v','e','l'};
	int temp=isPalindrome(a);
    printf("%d",temp);
	return 0;
}
