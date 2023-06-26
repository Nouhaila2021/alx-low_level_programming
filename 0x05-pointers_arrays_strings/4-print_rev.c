#include "main.h"

/**
 * _puts - function print a string followed by new line
 *
 * @s : input for _puts
 *
 * Return: Nothing
 *
*/

void _puts(char *s)
{

	int i = 0;

	while(s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
		
	}
	_putchar('\n');
}
