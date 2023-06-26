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

	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	i++;
	for (i /= 2; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
