#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * Description: Print alphabets lowercase in reverse
 * Return: 0 on success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
