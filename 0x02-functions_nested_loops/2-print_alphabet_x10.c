#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - A function that prints lower case alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char start = 'a';

		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		i++;
	}
}
