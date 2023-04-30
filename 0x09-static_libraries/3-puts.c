#include "main.h"

/**
 * _puts - print a string followed by a new line
 * @s: string to print
 *
 * Return: 0
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
		_putchar('\n');
}
