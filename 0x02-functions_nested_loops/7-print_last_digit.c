#include "main.h"
/**
 * print_last_digit -> prints what the name says
 * @n: parameter that is used
 * Return: last number
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');
	return (digit);
}
