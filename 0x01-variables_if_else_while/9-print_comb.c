#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 8)
	{
		putchar(digit + 48);
		putchar(", ");
		digit++;
	}

	putchar(digit + 48);
	putchar('\n');

	return (0);
}

