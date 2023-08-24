#include "main.h"
/**
 * leet - convertes string into 1337
 * @str: string to be converted
 * Return: ptr to str
 */
char *leet(char *str)
{
	int i = 0, j;

	int low[5] = {'a', 'e', 'o', 't', 'l'};

	int up[5] = {'A', 'E', 'O', 'T', 'L'};

	int codes[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == low[j] || str[i] == up[j])
			{
				str[i] = codes[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
