#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		while (argv[num][digit])
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
			digit++;
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
