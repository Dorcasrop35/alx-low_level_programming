#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * get_random_number - Generate a random number
 *
 * Return: A random number
 */
int get_random_number(void)
{
	srand(time(NULL));
	return rand() - RAND_MAX / 2;
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = get_random_number();

	printf("%d is ", n);

	if (n > 0)
	{
		printf("positive\n");
	}
	else if (n == 0)
	{
		printf("zero\n");
	}
	else
	{
		printf("negative\n");
	}
	return (0);
}

