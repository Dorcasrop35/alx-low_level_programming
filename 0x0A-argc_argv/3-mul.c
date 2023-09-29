#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main point of the program
 * @argc: The number of arguments
 * @argv: An array containing the arguments
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

        num1 = atoi(argv[1]); 
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

