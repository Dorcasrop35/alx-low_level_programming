#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments (including the program name).
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    func = get_op_func(argv[2]);

    if (func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    result = func(num1, num2);
    printf("%d\n", result);

    return (0);
}
