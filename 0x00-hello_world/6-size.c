#include<stdio.h>
/**
 * main - outputs to main.c
 * Description: 'prints various sizes of output on the screen'
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int n;
	float f;


	printf("size of char: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu byte(S)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(l));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
