#include "holberton.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet_x10(void);
{
int i, j;
for (i = 97; i < 123; i++)
{
for (j = 0; j < 10; j++)
_putchar ((char)i);
}
_putchar ('\n');
}
}
