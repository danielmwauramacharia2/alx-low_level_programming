#include <stdio.h>
#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i = 0, j, k, l, mul;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			mul = i * j;
			if (mul < 10)
			{
				_putchar(mul + '0');
			}
			else
			{
				k = mul / 10;
				l = mul % 10;
				_putchar(k + '0');
				_putchar(l + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				if (mul < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
