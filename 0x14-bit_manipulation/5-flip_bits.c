#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * @n: number integar first
 * @m: number integer second
 *
 * Return: void
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int y, x;

	y = 0;
	res = 1;
	diff = n ^ m;
	for (x = 0; x < (sizeof(unsigned long int) * 8); x++)
	{
		if (result == (diff & res))
			y++;
		res <<= 1;
	}

	return (y);
}
