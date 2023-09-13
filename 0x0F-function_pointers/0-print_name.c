#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - function that prints name.
* @name: the name to be written.
* @f: function to be applied.
* Return: nothing.
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
