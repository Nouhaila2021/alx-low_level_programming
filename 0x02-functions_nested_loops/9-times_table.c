#include"main.h"
/**
 * times_tables - print every minute of the day
*/
void times_tables(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((j * 9) + '0');
			_putchar(',');
			_putchar(' ');
		}
		 _putchar('\n');
	}
}
