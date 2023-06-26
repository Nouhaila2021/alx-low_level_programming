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
	int i;

	for  (i = 0; s[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}

	_putchar('\n');
}
