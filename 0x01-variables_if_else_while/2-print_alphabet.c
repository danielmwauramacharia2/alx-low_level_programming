#include <stdio.h>
/**
* main - Entry point to the code
*
*Description: Prints alphabets in lowercase
*Return: 0 on success
*/

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
