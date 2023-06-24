#include"main.h"
/**
 * _isalpha - check if alphabet is lowercase or uppercase
 *                  a-z
 * @c: input for _islower function
 * Return: 1 if lowercase 0 is is not
*/
int _isalpha(int c)
{


	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
