#include "main.h"
/**
 * puts2 - prints one char put of two
 * @str: type
 */
void puts2(char *str)
{
	int i, j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}