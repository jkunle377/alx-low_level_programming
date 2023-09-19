#include "main.h"

/**
 * swap_int - swap the value of two variables
 * @a: input a integer
 * @b: input b integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
