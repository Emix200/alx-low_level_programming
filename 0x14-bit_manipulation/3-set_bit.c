#include "main.h"

/**
 * set_bit - the value of a bit to 1 at a given index.
 * @n: pointer int of 1
 * @index: starting from 0 of the bet set
 * Return: 1 if it worked, or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	*n = *n | x;

	return (1);
}
