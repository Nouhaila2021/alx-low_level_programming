#include"main.h"
/**
 * _abs - check if alphabet is lowercase or uppercase
 *                  a-z
 * @n: input for _print_sign function
 * Return: 1 if n positive  -1 if negative and 0 if 0
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{

		return (0);
	}
	else
	{
		return (-n);
	}
}

