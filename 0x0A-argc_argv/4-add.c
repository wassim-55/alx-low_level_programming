#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check string
 *@str: array str
 *Return: Always 0
*/
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *@argc: int
 *@argv: int
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;
	int strint;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			strint = atoi(argv[count]);
			sum += strint;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}

