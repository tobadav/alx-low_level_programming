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
	char ch;
	int in;
	long int lg;
	long long int llg;
	float ft;


	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(ch));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(in));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lg));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llg);
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(ft));
	return (0);
}
