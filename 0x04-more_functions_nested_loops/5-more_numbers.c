#include "main.h"
/**
 * more_numbers - Print numbers.
 */
void more_numbers(void)
{

int i, j, l, k;

for (i = 1; i <= 10; i++)
{
for (j = 1; j <= 14; j++)
{
if (j > 9)
{
k = j / 10;
_putchar(k + '0');
}
l = j % 10;
_putchar(l + '0');
}
_putchar('\n');
}
}
