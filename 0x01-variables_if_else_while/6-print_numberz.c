#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print digits to base 10
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
