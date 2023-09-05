#include "main.h"
#include <stdlib.h>

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
	char *cd = malloc((total_length + 1) * sizeof(char));

	if (ac == 0 || av == NULL)
		return (NUll);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			total_length++;
	}

	total_length += ac;

	if (cd == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			cd[z] = av[x][y];
			z++;
		}
		if (x < ac - 1)
		{
			cd[z] = '\n';
			z++;
		}
	}

	cd[z] = '\0';

	return (cd);
}
