#include <stdio.h>
/**
 * main - Entry point/ program that prints a line
 * Description: 'Print the alphabet in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
