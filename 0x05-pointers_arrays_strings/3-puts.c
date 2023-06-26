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

	while (*s != '\0')
		_putchar(*s + 0);
		s++;
}
