#include"main.h"
/**
 * print_alphabet - use _putchar to write aplhabet
 *                  a-z
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
