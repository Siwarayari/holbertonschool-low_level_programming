#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 *
 * @array:is a pointer to the first element of the array to search in
 * @size:is the number of lelements in array
 * @value:is the value to searchfor
 * Return: first index -1
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t s = 0, r = size - 1;
	size_t m, i;

	if (array == NULL)
	{
		return (-1);
	}
	while (s <= r)
	{
		printf("Searching in array: ");
		for (i = s; i < r ; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[r]);
		m = (l + r) / 2;
		if (array[m] < value)
		{
			s = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
