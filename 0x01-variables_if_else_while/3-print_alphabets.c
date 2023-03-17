#include <stdio.h>
/**
 * main - Entry point/ program that prints a line
 * Description: 'Print the alphabet in lowercase and uppercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int n = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
