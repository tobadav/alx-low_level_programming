#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input variable
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < i; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
