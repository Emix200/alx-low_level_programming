#include "main.h"

/**
 * _power - base calculation
 * @base: the base
 * @pow: the power
 *
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int x;

	num = 1;
	for (x = 1; x <= pow; x++)
		num *= base;
	return (num);
}

/**
 * print_binary -  prints the binary representation of a number.
 * @n: intergar formaat
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
