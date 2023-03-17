#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point/ program
 * Description: 'the last digi'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int dd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dd = n % 10;
	if (dd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, dd);
	}
	else if (dd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, dd);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, dd);
	}
	return (0);
}
