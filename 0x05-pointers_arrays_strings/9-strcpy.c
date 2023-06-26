#include "main.h"

/**
 * _strcpy  - function coppied the strind src to dest
 *
 * @dest : input for print_array
 * @src :input for print_array
 * Return: string
 *
*/

void _strcpy(int *dest, int *src)
{

	int i;

	for (i = 0; src[i] != '\0'; ++i)
		;
	for (l = 0; l < i; l++)
		dest[l] = src[l];
	return (dest);
}
