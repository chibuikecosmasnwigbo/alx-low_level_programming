#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char FIZZ[] = "Fizz";
	char BUZZ[] = "Buzz";
	char FIZZBUZZ[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", BUZZ);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", FIZZBUZZ);
		else if (i % 3 == 0)
			printf("%s ", FIZZ);
		else if (i % 5 == 0)
			printf("%s ", BUZZ);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
