#include "main.h"

/**
 * _strlen - function return the length of string
 *
 * @s : input for _strlen
 *
 * Return: the length of string passed as argument to _strlen
 *
*/

int _strlen(char *s)
{

	int i;

	for (i = 0; *s != '\0'; s++)
		++i;
	return (i);
}
