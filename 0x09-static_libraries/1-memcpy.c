#include "main.h"

/**
 * _memcpy -  copy a block of memory from one location to another
 * @dest: memory destination where content is copied to
 * @src: source of data to be copied
 * @n: number of bytes to be copied
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n++;
	}
	return (dest);
}
