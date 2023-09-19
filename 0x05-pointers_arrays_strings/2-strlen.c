#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: input string
 * Return: 0;
 */

int _strlen(char *s)
{
		int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
