#include "main.h"
/**
 * _abs -> computes the absolute value of an integer
 * @r: set parameter
 * Return: absolute value of an integer
 */
int _abs(int r)
{
	if (r < 0)
		r = -r;
	return (r);
}
