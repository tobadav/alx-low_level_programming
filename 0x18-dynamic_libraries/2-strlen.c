#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int a = 1, sum = 0;
	char b = s[0];

	while (b != '\0')
	{
	sum++;
	b = s[a++];
	}
	return (sum);
}
