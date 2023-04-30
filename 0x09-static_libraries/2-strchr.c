#include "main.h"

/**
 * _strchr - search first occurrence
 * @s: string pointer to be searched
 * @c: char located
 *
 * Return: 0 success
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
