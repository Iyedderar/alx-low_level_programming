#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...);
char *_strcpy(char *dest, char *src);


/**
 * _strcpy - copies a string from src to dest
 * @dest: destination
 * @src: source
 *
 * Return: pointer to char dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * print_strings - Prints strs separated.
 * @n: The number of paramters passed to the function.
 * @...: The strs to be treated.
 * @separator: The separator.
 *
 * Return: Nothing.
 *
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list f;
	unsigned int i;
	char *s = "";

	if (separator == NULL)
		separator = "";

	va_start(f, n);

	for (i = 0; i < n; i++)
	{
		_strcpy(s, va_arg(f, char *));
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		printf("%s", separator);
	}
	printf("\n");

	va_end(f);
}
