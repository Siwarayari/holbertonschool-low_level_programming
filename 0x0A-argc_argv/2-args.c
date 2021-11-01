<<<<<<< HEAD
include <stdio.h>
**
* main - print the name of the program
* @argc: the number of command line arguments in argv array
* @argv: an array containing the program ccomand line 
*
=======
#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 *@argc: int!
 *@argv: int
 *c: count
 * Return: 0
*/
int main(int argc, char *argv[])
{
int c;
for (c = 0; c < argc; c++)
printf("%s\n", argv[c]);
return (0);
}
>>>>>>> 35ffe0a10cca2bba88872db55b2d8ec86d7c7b0d
