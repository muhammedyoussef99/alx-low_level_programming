#include <stdio.h>

/**
 * main - Entry point
 * @argc: The int number of command-line arguments
 * @argv: list of an array of command-line argument strings
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
