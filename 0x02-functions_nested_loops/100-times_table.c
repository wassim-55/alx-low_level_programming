#include "main.h"
/**
 * print_times_table -  prints the n times table, starting with 0
 *
 * @n: input from other function
 *
 *Return: n is greater than 15 or less than
 *	0 the function should not print anything
 *
*/
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('n');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				k = i * j;

				_putchar(k);
			}
			_putchar('\n');
		}
	}
}
