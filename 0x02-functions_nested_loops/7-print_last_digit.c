#include"main.h"
/**
 * print_last_digit - check if alphabet is lowercase or uppercase
 *                  a-z
 * @n: input for _print_sign function
 * Return: 1 if n positive  -1 if negative and 0 if 0
*/
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit > 0)
	{
		_putchar(lastdigit);
		return (lastdigit);
	}
	else
	{
		lastdigit = (-1 * (n % 10));
		_putchar(lastdigit);
		return (lastdigit);
	}
}


