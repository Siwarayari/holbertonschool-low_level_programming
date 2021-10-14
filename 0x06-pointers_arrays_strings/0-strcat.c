#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: pointer for the first string we want to change
 *@src: pointer  for the second string
 *
 *Return: the new string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		j++;
	}
	for (l = i; l <= i + j; l++)
	{
		dest[l] = src[k];
		k++;
	}
	return (dest);
}
