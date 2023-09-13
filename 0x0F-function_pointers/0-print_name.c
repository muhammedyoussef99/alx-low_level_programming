#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name.
 * @name: The name to be printed.
 * @f: A function that takes a char* as an argument to print the name.
 */
void print_name(char *name, void (*f)(char *));
{
		f(name);
}
