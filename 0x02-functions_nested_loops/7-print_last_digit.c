#include "main.h"
/**
 * print_last_digit -> prints what the name says
 * @n: parameter that is used
 * Return: last number
 */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
	d = (-1 * (n % 10));
	_putchar (d + '0');
	return (d);
	}

	else
	{
	d = (n % 10);
	return (d);
	putchar (d + '0');
	return (d);
	}
}
