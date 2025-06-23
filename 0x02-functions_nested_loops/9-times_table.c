#include <stdio.h>
#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i = 0, j, mul;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			mul = i * j;
			if (j == 0)
			{
				_putchar(mul + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (mul < 10)
				{
					_putchar(' ');
					_putchar(mul + '0');
				}
				else
				{
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}

