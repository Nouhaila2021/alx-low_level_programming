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
	int Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit = n % 10;
	if (Last_digit > 5)
	{
		printf("Last digit of %d is %d is greater than 5 ", n, Last_digit);
	}
	else if (Last_digit == 0)
	{
		printf("Last digit of %d is %d is 0 ", n, Last_digit);
	}
	else
	{
		printf("Last digit of %d is %d is less than 5 ", n, Last_digit);
	}
	return (0);
}
