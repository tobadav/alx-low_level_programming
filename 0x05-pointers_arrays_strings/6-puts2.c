#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: input
 * Return: 0 (success)
 */
void puts2(char *str)
{
	int z = 0;

	for (; str[z] != '\0'; z++)
	{
	if ((z % 2) == 0)
	_putchar(str[z]);
	else
	continue;
	}
	_putchar('\n');
}
