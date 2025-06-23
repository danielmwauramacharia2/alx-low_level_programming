#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
	int i = 0;
	int j, k, l, m, n;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			if (i < 10)
			{
				_putchar(0 + '0');
				_putchar(i + '0');
			}
			else
			{
				k = i / 10;
				_putchar(k + '0');
				l = i % 10;
				_putchar(l + '0');
			}
			_putchar(':');
			if (j < 10)
			{
				_putchar(0 + '0');
				_putchar(j + '0');
			}
			else
			{
				m = j / 10;
				n = j % 10;
				_putchar(m + '0');
				_putchar(n + '0');
			}
			_putchar('\n');
			j++;
		}
		i++;
	}
}
