#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * @n: The input integer
 */
void print_to_98(int n)
{
	while (n >= 98 || n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(",");
			printf(" ");
		}
		if (n > 98)
		{
			n--;
			continue;
		}
		else if (n < 98)
		{
			n++;
			continue;
		}
		else
			break;
	}
	printf("\n");
}

