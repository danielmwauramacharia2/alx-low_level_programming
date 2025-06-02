#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to the program
 *
 * Return: 0 on sucess
 */

int main(void)
{
	char c;

	c = CHAR_MIN;
	while (c != CHAR_MAX)
	{
		printf("%d\n", c);
		c = c + 1;
	}
	return (0);
}
