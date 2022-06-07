#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
