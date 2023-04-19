#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: element  of array
 * @action: pointer to the function
 * @size: array size
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		x = 0;
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
