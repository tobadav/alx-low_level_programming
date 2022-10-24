#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{
	int m = 0, o;

	while (m < n && n > 0)
	{
	o = 0;
	while (o < m)
	{
	_putchar(' ');
	o++;
	}
	_putchar('\\');
	_putchar('\n');
	m++;
	}
	if (m == 0)
	_putchar('\n');
}
