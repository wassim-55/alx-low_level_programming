#include"main.h"
/**
 * times_table - print 9 times table
 * @ i, j, k: inputs from function
 *
 *Return: table
*/
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;

			/*
			 * put space if product is a single number
			 * placethe first digit if its two numbers
			 */

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + 48);
			_putchar((k % 10) + 48);
		}
		_putchar('\n');
	}
}
