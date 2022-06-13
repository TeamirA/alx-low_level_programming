#include "main.h"
#include <stdio.h>
/**
 * print_array - print n of int array
 * @a: pointer
 * @n: n
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
