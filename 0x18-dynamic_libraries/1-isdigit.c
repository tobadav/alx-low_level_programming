#include "main.h"
/**
 * _isdigit - Write a function that checks for a digit
 * @c: checks arguements
 * Return:0 or 1 depending on the code
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
