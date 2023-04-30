#include "main.h"

/**
 * _strstr - search for the first occurrence of a substring
 * @haystack: prints to be searched
 * @needle: strings to be searched for
 *
 * Return: 0 on success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
