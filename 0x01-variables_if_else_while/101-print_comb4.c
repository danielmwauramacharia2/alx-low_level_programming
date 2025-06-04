#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * Description: prints all possible different combinations of three digits
 * Return: 0 on success 1 on fail
 */
int main(void)
{
	int i, j, k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
