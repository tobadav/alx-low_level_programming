#include <stdio.h>
/**
 * main - prints Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int g, h, i, next;

	h = 1;
	i = 2;
	for (g = 1; g <= 50; ++g)
	{
	if (h != 20365011074)
	{
	printf("%ld, ", h);
	}
	else
	{
	printf("%ld\n", h);
	}
	next = h + i;
	h = i;
	i = next;
	}
	return (0);
}
