#iinclude "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
*/
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (int i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (int j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2 == 1)
				printf(" ");
		}

		for (int j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (isprint(b[i + j]))
					putchar(b[i + j]);
				else
					putchar('.');
			}
			else
			{
				putchar(' ');
			}
		}

		putchar('\n');
	}
}
