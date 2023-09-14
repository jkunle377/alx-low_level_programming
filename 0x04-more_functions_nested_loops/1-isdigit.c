#include "main.h"

/**
 * _isdigit - checks if parameter is a digit
 *
 * Return: 1 when input is a digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
