#include "main.h"
/**
 * flip_bits - sets the value of a bit at a given index.
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
