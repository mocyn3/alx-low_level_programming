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
	int LASTDI;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LASTDI = n % 10;
	if (LASTDI > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LASTDI);
		}
	else if (LASTDI == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LASTDI);
	}
	else if (LASTDI < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LASTDI);
	}
	return (0);
}
