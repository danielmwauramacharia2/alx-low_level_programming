#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * Description: prints all possible combinations of two two-digit numbers
 * Return: 0 on success
 */
int main(void)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;

	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			k = i / 10;
			l = i % 10;
			m = j / 10;
			n = j % 10;
			putchar(k + '0');
			putchar(l + '0');
			putchar(' ');
			putchar(m + '0');
			putchar(n + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

