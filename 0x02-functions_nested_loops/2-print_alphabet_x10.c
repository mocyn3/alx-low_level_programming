#include "main.h"

/**
 * print_alphabet_x10 - prints in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char b;
	int a;

	a = 0;

	while (a < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
