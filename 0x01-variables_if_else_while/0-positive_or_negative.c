#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - starting point of the code
 * Description: 'to print positive or negative number'
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d number is positive\n", n);
	else if (n == 0)
		printf("%d number is zero\n", n);
	else
		printf("%d number is negative\n", n);
	return (0);
}
