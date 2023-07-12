#include "main.h"
#include <stdlib.h>

/**
 *count_word - helper function to count nbre of words in string
 *
 *@s: string
 *
 *Return: int
 *
*/
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}
/**
 *strtow - returns a pointer to an array of strings (words)
 *@str: string
 *Return: pointer to char
 *
*/
char **strtow(char *str)
{
	char **m, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	m = (char **)malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				m[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	m[k] = NULL;
	return (m);
}
