#include "main.h"

/**
 * _memcpy - copies memory area from src to dest n amount of times
 * @dest: prem 1
 * @src: prem 2
 * @n: amount of times the src information willbe copied to dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
