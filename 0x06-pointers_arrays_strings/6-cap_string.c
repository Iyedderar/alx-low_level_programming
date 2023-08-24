#include"main.h"

/**
 *cap_string - capitalizes words of str
 *@str: string to be capitalized
 *Return: ptr to str
*/

char *cap_string(char *str)
{
	*str -= 32;
	str++;
	for ( ; *str; str++)
	{
		while (!(*str >= 'a' && *str <= 'z') && *str)
			str++;
		if (*(str - 1) == ' ' ||
		    *(str - 1) == '\t' ||
		    *(str - 1) == '\n' ||
		    *(str - 1) == ',' ||
		    *(str - 1) == ';' ||
		    *(str - 1) == '.' ||
		    *(str - 1) == '!' ||
		    *(str - 1) == '?' ||
		    *(str - 1) == '"' ||
		    *(str - 1) == '(' ||
		    *(str - 1) == ')' ||
		    *(str - 1) == '{' ||
		    *(str - 1) == '}')
			*str -= 32;
	}
	return (str);
}
