#include <stdio.h>
/**
 * main - Entry point/ program that prints a line
 * Description: 'Print all possible combinations of two two-digit numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ifi;
	int i;
	int jfi;
	int j;

	for (ifi = 48; ifi < 58; ifi++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			jfi = ifi;
			for (; jfi < 58; jfi++)
			{
				for (; j < 58; j++)
				{
					putchar(ifi);
					putchar(i);
					putchar(' ');
					putchar(jfi);
					putchar(j);
					if (ifi != 57 || jfi != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
