#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function free 2d array.
 * @ac: nbr of rows
 * @av: pointer to the 2d array
 * Return:  pointer to first char or null when it fails
 */
char *argstostr(int ac, char **av)
{
	char *f;
	int i, j, n = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			size++;
	f = malloc(sizeof(char) * (size + ac + 1));
	if (f == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			f[n++] = av[i][j];
		}
		f[n++] = '\n';
	}
	f[size + ac] = '\0';
	return (f);
}
