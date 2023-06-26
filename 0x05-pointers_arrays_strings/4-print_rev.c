#include "main.h"

/**
 * print_rev - function print a string in reverse followed by new line
 *
 * @s : input for print_rev
 *
 * Return: Nothing
 *
*/

void print_rev(char *s)
{

	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
		
	}
	_putchar('\n');
}
