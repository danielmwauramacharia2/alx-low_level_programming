#include <stdio.h>
/**
 * main - Entry function to the program
 *
 * Description: program that computes and prints the sum of multiples of 3 & 5
 *
 * Return: 0 on success , otherwise 1 on fail
 */
int main(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

