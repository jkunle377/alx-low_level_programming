#include "main.h"
#include <stdlib.h>

/**
 * _create_array - create an array of chars
 * @size: size of array
 * @c: character with which the array should be initialized
 * Return: array
 */

char *_create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
