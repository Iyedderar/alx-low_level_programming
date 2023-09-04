#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup  -   function returns a pointer to a new string which is a
 * duplicate of the string str. Memory for the new string is
 * obtained with malloc,and can be freed with free.
 * @str: string to be handled
 * Return: -NULL if str = NULL.
 *         -pointer to the duplicated string, NULL if insufficient
 * memory was available
 */
char *_strdup(char *str)
{
	char *f;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	f = malloc(sizeof(char) * (j + 1));
	if (f == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		f[i] = str[i];
	f[j] = '\0';
	return (f);
}
