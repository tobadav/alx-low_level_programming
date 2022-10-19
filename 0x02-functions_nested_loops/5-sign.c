#include "main.h"
/**
 * print_sign -> number sign are printed based on condition set
 * @n: used as an argument
 * Return: based on 0 1 -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
