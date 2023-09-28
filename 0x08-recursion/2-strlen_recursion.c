#include "main.h"

/**
 *  _strlen_recursion - prints the length of a string
 *  @s: the string
 *  Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;

	return 1 +  _strlen_recursion(s + 1);
}
