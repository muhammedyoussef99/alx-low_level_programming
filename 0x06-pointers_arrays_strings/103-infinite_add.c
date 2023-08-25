#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_string - Reverses a string in-place.
 * @str: The string to be reversed.
*/
void reverse_string(char *str)
{
	int length = strlen(str);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

/**
 * infinite_add - Adds two positive numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result if successful, otherwise 0.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int idx_r = 0;

	int len_n1 = strlen(n1);
	int len_n2 = strlen(n2);

	while (idx_r < size_r - 1)
	{
		int num1 = (idx_r < len_n1) ? n1[len_n1 - idx_r - 1] - '0' : 0;
		int num2 = (idx_r < len_n2) ? n2[len_n2 - idx_r - 1] - '0' : 0;
		int sum = num1 + num2 + carry;

		carry = sum / 10;
		r[idx_r] = (sum % 10) + '0';

		idx_r++;

		if ((idx_r >= len_n1 || idx_r >= len_n2) && carry == 0)
			break;
	}

	if (carry)
	{
		if (idx_r < size_r - 1)
		{
			r[idx_r] = carry + '0';
			idx_r++;
		}
		else
		{
			return (0);
		}
	}

	r[idx_r] = '\0';
	reverse_string(r);
	return (r);
}
