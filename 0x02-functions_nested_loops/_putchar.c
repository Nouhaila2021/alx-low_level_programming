#include<unistd.h>
#include"main.h"

/**
 * _putchar - writes the characer c to stdout
 * @c: The character to print
 * Return: on succes 1.
 *         on error -1 is returned, and error is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}