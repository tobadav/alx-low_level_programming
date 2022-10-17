#include<stdio.h>
/**
 * main - outputs to main.c
 *
 * Description: 'prints various sizes of output on the screen'
 *
 * Return: 0
 */
int main(void)
{
	char chType;
	int inType;
	long l;
	long long int ll;
	float flt;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(chType));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(inType));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flt));
	return (0);
}
