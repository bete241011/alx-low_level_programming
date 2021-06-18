#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int i_first_digit;
	int i_last_digit;
	int j_first_digit;
	int j_last_digit;

	for (i = 0; i < 100; i++)
	{
		i_first_digit = (i / 10 + '0');
		i_last_digit = (i % 10 + '0');
		for (j = 0; j < 100; j++)
		{
			j_first_digit = (j / 10 + '0');
			j_last_digit = (j % 10 + '0');
			if (i != j && i < j)
			{
				putchar(i_first_digit);
				putchar(i_last_digit);
				putchar(' ');
				putchar(j_first_digit);
				putchar(j_last_digit);
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
