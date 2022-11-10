#include "main.h"

/**
 * create_array - Create an array, and initialiazes it with a specific
 * char @c
 *
 * @size: Size of the array of chars to be created
 *
 * @c: Char value to initialize the array with
 *
 * Return: Pointer to the array created OR NULL if @size = 0 OR
 * the creation of the array fails
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
	return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
	return (NULL);
	}
	else
	{
	position = 0;
	while (position < size)
	{
	*(buffer + position) = c;
	position++;
	}

	return (buffer);
}
