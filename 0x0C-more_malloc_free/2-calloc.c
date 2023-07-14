#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 *@s: pointer
 *@b: constant
 *@n: max bytes to use
 *Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 *_calloc -  allocates memory for an array, using malloc
 *@nmemb: input
 *@size: input
 *
 *Return: nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}