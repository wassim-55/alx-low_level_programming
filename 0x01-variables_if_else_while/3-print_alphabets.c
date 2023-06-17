#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char ch = 'A';

	/*prints a -z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A -Z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
