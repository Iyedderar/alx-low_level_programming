#include "main.h"

/**
 * reverse_array - reverse an array of int
 * @a: the array
 * @n: size of the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
