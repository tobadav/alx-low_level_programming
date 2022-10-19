#include "main.h"
/**
 * print_last_digit -> prints what the name says
 * @r: parameter that is used
 * Return: last number
 */
int print_last_digit(int r)
{
	if (r < 0)
		r = -r;
	return (r % 10);
}
