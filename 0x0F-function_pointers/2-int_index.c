#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: element of array
 * @cmp: pointer to function to compare arrays
 * @size: array's size
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);

				x++;
			}
		}
	}

	return (-1);
}
