#include <unistd.h>
/**
 * _putchar - character c is written to stdout
 * @c: the character to be printed
 * Return: 1 on success
 * Failure: -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
