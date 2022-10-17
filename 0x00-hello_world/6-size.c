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


	printf("size of char: %lu bytes\n", (unsigned long)sizeof(c));
	printf("size of int: %lu bytes\n", (unsigned long) sizeof(i));
	printf("size of long int: %lu bytes\n", (unsigned long)sizeof(l));
	printf("size of long long int: %lu bytes\n", (unsigned long)sizeof(n);
	printf("size of float: %lu bytes\n", (unsigned long)sizeof(f);
}
