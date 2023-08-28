#include "main.h"

/**
 * print_diagsums - outputs the diagonal sums
 * @a: ptr to arr
 * @size: number of lines
 * Return: void
 */

void print_diagsums(int *a, int size)
{
		int i, j, sumd1 = 0, sumd2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				sumd1 += *(a + i * size + j);
			if (j + i == size - 1)
				sumd2 += *(a + i * size + j);
		}
	}
	printf("%d, %d\n", sumd1, sumd2);
}
