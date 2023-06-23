#include "main.h"
/**
 * _isupper - checks for uppercase character
 *  @c: input from function
 *
 * Return: 1 if its uppercase, 0 if not
*/
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
