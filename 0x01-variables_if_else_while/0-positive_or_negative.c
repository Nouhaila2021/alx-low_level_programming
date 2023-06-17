#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Description:" sorted n is positive or negative or zero."
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("is negative");
	}

	else if (n == 0)
	{
		printf("is zero");
	}

	else
	{
		printf("is positive");
	}

	return (0);
}
