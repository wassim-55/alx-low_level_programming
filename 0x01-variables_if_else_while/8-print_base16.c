#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		if (digit <= 57 || digit > 96)
			putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
