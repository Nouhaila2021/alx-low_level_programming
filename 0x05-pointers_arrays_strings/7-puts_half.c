#include "main.h"

/**
 * puts_half  - function print half of a string
 *
 * @s : input for print_rev
 *
 * Return: Nothing
 *
*/

void puts_half(char *s)
{

	int l, i;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = l /2; i < l ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
