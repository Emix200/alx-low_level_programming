#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name of the person
 * @f: the function of the name
 *
 * Return: 0 always
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
