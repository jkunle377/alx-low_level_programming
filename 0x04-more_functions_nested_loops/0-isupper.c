#include "main.h"

/**
 * _isupper - check if parameter is uppercase
 *
 * @c: input character
 *
 * Return: 1 if character is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
