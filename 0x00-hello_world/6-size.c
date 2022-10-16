#include<stdio.h>
/**
 * main - outputs to main.c
 * Description: 'prints various sizes of output on the screen'
 * Return: 0
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;


	printf("size of int: %ld bytes\n", sizeof(intType));
	printf("size of float: %ld bytes\n", sizeof(floatType));
	printf("size of double: %ldbytes\n", sizeof(doubleType));
	printf("size of char: %ldbytes\n", sizeof(charType));
}
