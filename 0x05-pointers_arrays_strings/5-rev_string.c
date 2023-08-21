#include"main.h"
/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int n = 0, i = 0;
	char t;

	while (s[i++])
		n++;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
}
