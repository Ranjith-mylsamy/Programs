#include <iostream>
using namespace std;

// Function to check for consonant
bool isConsonant(char ch)
{
	// To handle lower case
	ch = toupper(ch);

	return !(ch == 'A' || ch == 'E' ||
			ch == 'I' || ch == 'O' ||
			ch == 'U') && ch >= 65 && ch <= 90;
}

// to count total number of consonants from
// 0 to n-1
int totalConsonants(string str, int n)
{
	if (n == 0)
		return isConsonant(str[0]);

	return totalConsonants(str, n - 1) +
		isConsonant(str[n-1]);
}

// Driver code
int main()
{
	string str = "abc de";
	cout << totalConsonants(str, str.length());
	return 0;
}
