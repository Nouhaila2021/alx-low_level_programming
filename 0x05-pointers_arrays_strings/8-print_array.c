#include "main.h"

/**
 * print_array  - function print n element of an array
 *
 * @n : input for print_array
 * @a :input for print_array
 * Return: Nothing
 *
*/

void print_array(int *a, int n)
{

	int i;

	for (i =0; i < n ; i++)
	{
		if (i != (n - 1))
			printf("%d, ",a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
