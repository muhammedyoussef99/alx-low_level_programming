/**
 * print_diagonal - Draws a diagonal line
 *		of length n using the '\' character.
 * @n: The number of times the character '\' should be printed.
*/

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');/*Print spaces before printing '/'*/
			_putchar(92);/* Print the '/' character for the diagonal*/
			_putchar('\n');/* Move to the next line*/
		}
	}
}
