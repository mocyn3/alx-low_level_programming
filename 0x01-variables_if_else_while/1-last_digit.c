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
	int LASTDIGIT;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LASTDIGIT = n % 10;
	if (LASTDIGIT > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LASTDIGIT);
		}
	else if (LASTDIGIT == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LASTDIGIT);
	}
	else if (LASTDIGIT < 6)
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, LASTDIGIT);
	}
	return (0);
}
