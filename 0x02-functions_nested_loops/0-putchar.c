#include <stdio.h>
#include "main.h"
/**
 * main - Entry point to the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;
	char name[] = "_putchar";

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
