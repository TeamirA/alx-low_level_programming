#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print diagonal line dependent on the integer n.
 * @n: the number of lines using '\' characters to use
 * Return: void.
 */
void print_diagonal(int n)
{
	int i;
	int spaces;

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
