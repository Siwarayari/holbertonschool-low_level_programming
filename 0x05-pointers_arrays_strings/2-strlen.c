#include "main.h"
/**
 * _strlen - function that returns the length of a string
 *
 * i - int
 *@s:int
 *Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;
	return (i);
}
