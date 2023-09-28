#include "main.h"
/**
 * get_endianness - get the type of the cpu.
 *
 *
 * Return:- 1 if little indian.
 *        - 0 if big indian.
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
