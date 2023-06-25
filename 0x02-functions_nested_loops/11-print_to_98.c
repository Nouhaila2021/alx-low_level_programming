#include"main.h"
/**
 * print_to_98  - print number to 98
 *
 * @n: input for add  function
 *
*/

void print_to_98(int n)
{
	int i, j = 98;

	if (n < j)
	{

		for (i = n; i <= j; i++)
		{
			if (i != j)
			{

				printf("%d", i);
				_putchar(',');
				_putchar(' ');
			}
			else
				printf("%d", j);
		}
	}
	else
	{
		for (i = n; n >= j; i--)
		{
			if (i != j)
			{
				printf("%d", i);
				_putchar(',');
				_putchar(' ');
			}
			else
				printf("%d", j);
		}
}

