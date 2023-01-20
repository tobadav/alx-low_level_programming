#include "main.h"
/**
 * _isalpha -> checks for alphabetic characters
 * @c: character that is an arguement
 * Return: return 1 if lowercase or uppercase and 0 for otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
