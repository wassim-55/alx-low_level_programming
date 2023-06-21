#include"main.h"
/**
 * print_last_digit - print last digit
 *
 * @n: input from function
 *
 *Return: digit
 *
*/
int print_last_digit(int n)
{
	int digit;


	if (n < 0)
		digit = _abs(n) % 10;
	else
		digit = n % 10;
	return (digit);
}

