#include "main.h"

/**
 * puts2 - function print a string followed by new line
 *
 * @s : input for _puts
 *
 * Return: Nothing
 *
*/

void puts2(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s + 0);
		s += 2;
	}

	_putchar('\n');
}
