#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * Description: prints all number of base 16 in lowercase
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
