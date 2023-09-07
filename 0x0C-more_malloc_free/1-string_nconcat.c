#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: first string.
 * @s2: scnd string.
 * @n: nbr of strings from s2
 * Return:  pointer to the memory allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *f;
	unsigned int sz1 = 0, sz2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		sz1++;
	for (i = 0; s2[i]; i++)
		sz2++;
	if (n >= sz2)
		n = sz2;
	f = malloc(sizeof(char) * (sz1 + n + 1));

	if (f == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		f[i] = s1[i];
	for (i = 0; i < n; i++)
		f[i + sz1] = s2[i];
	f[sz1 + n] = '\0';
	return (f);
}
