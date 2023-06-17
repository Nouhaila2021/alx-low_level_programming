#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry Point
 *
 * Description: "Print alphabet in lowercase."
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		putchar(c);

	}
	putchar("/n");

	return (0);

}
