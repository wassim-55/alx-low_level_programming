#include "main.h"
/**
 *print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 *
 *Return : Always 0 (success)
 *
*/
void print_most_numbers(void)
{
	int num = 0;

	do {
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
