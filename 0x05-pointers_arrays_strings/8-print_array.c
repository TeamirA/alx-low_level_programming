#include "main.h"
#include <stdio.h>
/**
 * print_array - print n of int array
 * @a: pointer
 * @n: n
 */
void print_array(int *a, int *b)
{
	short c = 0;

	while (b-- > 0)
	{
		printf("%d", a[c++]);
		if (b != 0)
			printf(", ");
	}
	printf("\n");
}
