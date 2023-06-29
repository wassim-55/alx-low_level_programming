#include "main.h"
/**
 *reverse_array - reverses arrays
 *@a: input
 *@n: input
 *Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
