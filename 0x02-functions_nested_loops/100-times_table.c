#include <stdio.h>
#include "main.h"
/**
 * print_times_table - function that prints the n times table
 * @n: The size of the table
 */
void print_times_table(int n)
{
	int i = 0, j, mul;

	while (i <= n && (!(n > 15 || n < 0)))
	{
		j = 0;
		while (j <= n)
		{
			mul = i * j;
			if (j == 0)
				_putchar(mul + '0');
			else if (mul < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else if (mul < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 100) + '0');
				_putchar(((mul / 10) % 10) + '0');
				_putchar((mul % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}













