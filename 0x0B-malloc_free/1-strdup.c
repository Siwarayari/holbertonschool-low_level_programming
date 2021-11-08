
Pulls
Issues
Marketplace
Explore
@siwar9910
Aymenbs22 /
holbertonschool-low_level_programming
Public

1
0

    0

Code
Issues
Pull requests
Actions
Projects
Wiki
Security

    Insights

holbertonschool-low_level_programming/0x0B-malloc_free/1-strdup.c
Aymenbs22 function that returns a pointer to a newly allocated space in memory
Latest commit 185e294 13 days ago
History
0 contributors
29 lines (28 sloc) 361 Bytes
#include "main.h"
/**
 * _strdup - function that creates an array of chars
 * s: char
 * @str: char
 * Return: s
*/
char *_strdup(char *str)
{
int i = 0;
int j = 0;
char *s;
if (str == NULL)
return (NULL);

while (str[i] != '\0')
{
i++;
}
s = malloc(sizeof(char) * i + 1);
if (s == NULL)
return (0);
while (str[j] != '\0')
{
s[j] = str[j];
j++;
}
return (s);
}
