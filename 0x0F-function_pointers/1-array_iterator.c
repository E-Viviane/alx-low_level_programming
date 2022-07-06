#include "function_pointers.h"

/**
  * array_iterator - function that executes array of functions
  * @array: array of functions to be executed
  * @size: size of array
  * @action: pointer to the function
  *
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
