#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @index: index of bit
 * @n: integar given
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, ris;


	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	ris = n & div;
	if (ris == div)
		return (1);

	return (0);
}
