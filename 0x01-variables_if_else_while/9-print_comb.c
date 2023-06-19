#include<stdio.h>
#include<stdlib.h>
/**
 * main -Entry Point
 *
 * Description: all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(' ');
		putchar(',');
		if (i != 9)
		{
			putchar('\n');
		}
	}
	return (0);
}
