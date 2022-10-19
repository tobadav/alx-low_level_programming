#include "main.h"
/**
 * print_last_digit -> prints what the name says
 * @r: parameter that is used
 * Return: last number
 */
int print_last_digit(int r)
{
	int i;

	if (r < 0)
		r = -r;
	i = n % 10;
	_putchar(i + '0');
	return (i);
}
