#include "main.h"

/**
 * main - prints its name
 * @argc - prints the length of command line argument
 * @argv - prints the the command line argument 
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
