#include"main.h"
/**
 * print_to_98  - print number to 98
 *
 * @n: input for add  function
 *
*/

void print_to_98(int n)
{
	int i, j=98;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", j);



}

