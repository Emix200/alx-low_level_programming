#include "main.h"

/**
 * _strpbrk - find first occurence in set of char
 * @s: string
 * @accept: set of char
 *
 * Return: 0 at success
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
