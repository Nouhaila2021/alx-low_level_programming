#include<unistd.h>
#include "main.h"

/**
 * main - Entry Point
 * _putchar: writes the character c to stdout
 * @c: The character to print
 * Return: on success 1
 *         on error, -1 is returned, and erno is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{

	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
