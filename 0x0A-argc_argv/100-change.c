#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Description: prints the minimum number of coins
 * Return: 0 (Success) or 1 (Error)
*/

int main(int argc, char *argv[])
{
	int quarters, dimes, nickels, cent2, penny;
	int remaining, remaining2, remaining3, final;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	} else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	} else
	{
		quarters = atoi(argv[1]) / 25;
		remaining = atoi(argv[1]) % 25;

		dimes = remaining / 10;
		remaining2  = remaining % 10;

		nickels = remaining2 / 5;
		remaining3  = remaining2 % 5;

		cent2 = remaining3 / 2;
		penny = remaining3 % 2;

		final = quarters + dimes + nickels + cent2 + penny;
		printf("%d\n", final);
	}
	return (0);
}
