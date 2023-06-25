#include"main.h"
/**
 * print_to_98  - print number to 98
 *
 * @n: input for add  function
 *
*/
void print_to_98(int n)
{
	int i;
	int j = 98;

	for (i = n; i <= j; i++)
	{

		printf("%d", i);
		_putchar(' ');
		_putchar(',');

	}

}

