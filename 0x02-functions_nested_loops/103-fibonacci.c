#include <stdio.h>
/**
 * main - Entry point of the code
 *
 * Description: Prints sum of even fibonacci numbers upto 4000000
 *
 * Return: 0 for success
 */
int main(void)
{
	int first = 1, second = 2, next = 0, sum = 0;

	while (next <= 4000000)
	{
		next = first + second;
		if (next % 2 == 0)
			sum += next;
		first = second;
		second = next;
	}
	printf("%d\n", sum);
	return (0);
}

