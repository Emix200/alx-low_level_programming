#include "main.h"

/**
 * _memset - fill a block of memeory wit its value
 * @s: starting address of memory to be filled
 * @b: char value
 * @n: integar to be changed
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;
	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
