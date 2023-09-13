#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - addition.
* @a: operator 1.
* @b: operator 2.
* Return: return the sum.
*/

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
* op_sub - substraction.
* @a: operator 1.
* @b: operator 2.
* Return: return the diffrence.
*/
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
* op_mul - multiplication.
* @a: operator 1.
* @b: operator 2.
* Return: return the result of the multiplication.
*/
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
* op_div - division.
* @a: operator 1.
* @b: operator 2.
* Return: return the result of the division.
*/
int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
* op_mod - modulo.
* @a: operator 1.
* @b: operator 2.
* Return: return the rest of the division.
*/
int op_mod(int a, int b)
{
	return ((a) % (b));
}
