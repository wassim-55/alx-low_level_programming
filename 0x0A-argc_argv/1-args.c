#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *@argc: int
 *@argv: int
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, lcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1}

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				lcents += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
