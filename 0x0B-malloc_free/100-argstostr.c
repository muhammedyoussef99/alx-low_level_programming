#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of the string
 * @s: string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int x, y, z = 0;
	char *cd;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; x < ac; x++, total_length++)
		total_length += _strlen(av[x]);

	cd = malloc((total_length + 1) * sizeof(char));

	if (cd == 0)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, z++)
			cd[z] = av[x][y];

		cd[z] = '\n';
		z++;
	}
	cd[z] = '\0';
	return (cd);
}
