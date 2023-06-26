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

	int i, j;

	j = _strlen(s);
	for (i = 0; i <= j; s++)
		_putchar(*(s + i));

}
