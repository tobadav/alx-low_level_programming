#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int j;
	int b;

	for (j = 0; j <= 23; j++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
