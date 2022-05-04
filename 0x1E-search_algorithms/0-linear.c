#include "search_algos.h"
/**
 * linear_search -a function that search for a value in an array
 * of integers using the Linear search algorithm.
 * @array:is a pointer to the first element of the array to search in
 * @size:is the number of lelements in array
 * @value:is the value to search
 * Return: -1 if not found or array is NULL OR index if found :))
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
