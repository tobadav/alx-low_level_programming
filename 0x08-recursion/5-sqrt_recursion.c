#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * check - checks for the square root
 * @a:int 1
 * @b:int 2
 * Return: int
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
	return (b);
	else if (b * b > a)
	return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
