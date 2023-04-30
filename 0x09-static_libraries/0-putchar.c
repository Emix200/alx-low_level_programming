#include <unistd.h>

/**
 * _putchar - write char c to stdout
 *
 * @c: char to print
 *
 * Return: success on 1
 * on error, -1 is returned, and errno is appropriately set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
