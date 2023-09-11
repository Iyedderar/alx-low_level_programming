#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int n = 0, i = 0;

	for (; s[i]; i++)
		n++;
	return (n);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - a function to allocate space for new_dog .
 * @name: the dog name.
 * @age: age of dog.
 * @owner: owner of the dog.
 * Return: new variable dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *samir;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	samir = malloc(sizeof(dog_t));
	if (samir == NULL)
		return (NULL);
	samir->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (samir->name == NULL)
	{
		free(samir);
		return (NULL);
	}
	samir->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (samir->owner == NULL)
	{
		free(samir->name);
		free(samir);
		return (NULL);
	}
	samir->name = _strcopy(samir->name, name);
	samir->owner = _strcopy(samir->owner, owner);
	samir->age = age;
	return (samir);
}
