#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat  -   f function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return:  pointer should point to a newly allocated space in
 * memory which contains the contents of s1, followed by the contents of s2
 *, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *f;
	int sz1 = 0;
	int sz2 = 0;
	int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		sz1++;

	for (i = 0; s2[i]; i++)
		sz2++;



	f = malloc(sizeof(char) * (sz2 + sz1 + 1));
	if (f == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < sz1; i++)
		f[i] = s1[i];

	for (i = 0; i < sz2; i++)
		f[sz1 + i] = s2[i];

	f[sz1 + sz2] = '\0';

	return (f);
}

