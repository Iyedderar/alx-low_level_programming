#include"main.h"

/**
 *cap_string - capitalizes words of str
 *@str: string to be capitalized
 *Return: ptr to str
*/

char *cap_string(char *str)
{
int i = 0, j = 0;
	int po[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
	'{', '}'};

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i])
	{
		for (; j < 13; j++)
		{
			if (str[i] == po[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
				break;
			}
		}
		i++;
	}
	return (str);
}
