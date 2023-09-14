#include "main.h"

/*
 * int _isupper(int c) - checks for uppercase or lowercase character
 *
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{ 
	       	return 0;
	}
}
