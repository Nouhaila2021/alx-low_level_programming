#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry Point
 *
 * Description: "print all alphabet without e and q."
 *
 * Return: Always 0 (Succes)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
