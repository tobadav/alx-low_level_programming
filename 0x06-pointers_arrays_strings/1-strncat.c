#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 * @n: number of bytes to be concatenated.
 * Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int extent, x;

	extent = 0;

	while (dest[extent] != '\0')
	{
	extent++;
	}
	for (x = 0; x < n && src[x] != '\0'; x++, extent++)
	{
	dest[extent] = src[x];
	}
	dest[extent] = '\0';
	return (dest);
}
