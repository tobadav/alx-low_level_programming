#include "main.h"
/**
 * more_numbers - prints ten times the numbers
 * Retuen: success
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
	}
}
