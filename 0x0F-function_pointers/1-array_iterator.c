#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elememt on a newline
 * @array: array
 * @size: size of elememt to print
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array == NULL || action == NULL)
		return;

	for (z = 0; z < size; z++)
	{
		action(array[z]);
	}
}

