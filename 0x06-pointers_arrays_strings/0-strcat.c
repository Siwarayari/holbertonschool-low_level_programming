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

char destination[] = "Hello ";


char source[] = "World!";
strcat(destination, source);

printf("Concatenated String: %s\n", destination);
}
return 0;
}
