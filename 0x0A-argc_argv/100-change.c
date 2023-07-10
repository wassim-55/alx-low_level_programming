#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *@argc: int
 *@argv: int
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num, j, r;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	r = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			r++;
			num -= coins[j];
		}
	}
	printf("%d\n", r);
	return (0);
}
