#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes, of the allocated space for ptr
 * @ptr: size, in bytes, of the allocated space for ptr
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int a, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (a = 0; a < n; a++)
		p[a] = oldp[a];
	free(ptr);
	return (p);
}
