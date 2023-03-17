#include <stdio.h>
/**
 * main - Entry point/ program that prints a line
 * Description: 'Print the alphabet in lowercase and uppercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int s = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (s <= 90)
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
