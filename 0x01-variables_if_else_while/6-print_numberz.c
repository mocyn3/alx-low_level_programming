#include <stdio.h>
/**
 * main - Entry point/ program that prints a line
 * Description: 'Print NUMBERS BASE 10'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
