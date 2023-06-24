#include "main.h"
/**
 * main - Entry Point
 * Description: writes the character c to stdout
 * Return: Always 0 (Succes)
*/
int main(void)
{

	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
