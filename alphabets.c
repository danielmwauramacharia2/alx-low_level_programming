#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on sucess
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		printf("%d:%c\n", c, c);
		c++;
	}
	return (0);
}
