#include"main.h"
/**
 * print_sign - check if alphabet is lowercase or uppercase
 *                  a-z
 * @n: input for _print_sign function
 * Return: 1 if n positive  -1 if negative and 0 if 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

