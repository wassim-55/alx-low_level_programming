#include "main.h"
/**
 *factorial -  factorial of a given number
 *@n: number
 *
 *Return: void
 *
*/
int factorial(int n)
{
	int f = 1;

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
		return (-1);
}

