#include"main.h"
/**
 * print_last_digit - check if alphabet is lowercase or uppercase
 *                  a-z
 * @n: input for _print_sign function
 * Return: 1 if n positive  -1 if negative and 0 if 0
*/
int print_last_digit(int n)
{
	if (n > 0)
	{
		return (n % 10);
	}
	else
	{
		return (-1 * (n%10));
	}
}


