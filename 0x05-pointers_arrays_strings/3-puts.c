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


	for (i = 0; i <= strlen(s); s++)
		_putchar(*(s + i));

}
