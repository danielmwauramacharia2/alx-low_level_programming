#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * Description: prints all possible combination of single-digit number
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
