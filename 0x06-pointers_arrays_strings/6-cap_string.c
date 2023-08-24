#include"main.h"

/**
 *cap_string - capitalizes words of str
 *@str: string to be capitalized
 *Return: ptr to str
*/

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!((str[i] >= 'a' && str[i] <= 'z') ||
		(str[i] >= 'A' && str[i] <= 'Z')))
			i++;

		if (str[i - 1] == ' ' ||
		    str[i - 1] == '\t' ||
		    str[i - 1] == '\n' ||
		    str[i - 1] == ',' ||
		    str[i - 1] == ';' ||
		    str[i - 1] == '.' ||
		    str[i - 1] == '!' ||
		    str[i - 1] == '?' ||
		    str[i - 1] == '"' ||
		    str[i - 1] == '(' ||
		    str[i - 1] == ')' ||
		    str[i - 1] == '{' ||
		    str[i - 1] == '}' ||
		    i == 0)
			str[i] -= 32;

		i++;
	}

	return (str);
}
