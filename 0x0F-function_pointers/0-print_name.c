#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @o: A pointer to a function that prints a name.
 */
void print_name(char *name, void (*o)(char *))
{
	if (name == NULL || o == NULL)
		return;

	o(name);
}
