#include "main.h"

/**
 * _strcpy - copy a string from one array to another.
 * @dest: destination to be copied
 * @src: source to be copied from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
