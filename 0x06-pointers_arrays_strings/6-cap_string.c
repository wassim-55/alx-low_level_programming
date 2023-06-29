#include "main.h"
#include <stdio.h>
/**
 *islower - determinate whether ASCII is lowercasa
 *@c: character
 *Return: 1 if true, 0 if false
 *
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 *isdelimiter - determinate whether ascii is a delimiter
 *@c: character
 *Return: 1 if true, 0 if false
*/

int isdelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"()()";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
	return (0);
}

/**
 *cap_string - capitalization all words of a string
 *
 *@s: input
 *Return: string
 *
*/
char *cap_string(char *s)
{
	char *ptr = s;
	int founddelimit = 1;

	while (*s)
	{
		if (isdelimiter(*s))
			founddelimit = 1;
		else if (islower(*s) && founddelimit)
		{
			*s -= 32;
			founddelimit = 0;
		}
		else
			founddelimit = 0;
		s++;
	}
	return (ptr);
}

