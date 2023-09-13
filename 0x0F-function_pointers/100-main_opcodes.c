#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_error - Print an error message and exit with a specified status code.
 * @status: The exit status code.
 * @message: The error message to print.
 *
 * Return: None.
 */
void print_error(int status, const char *message)
{
    fprintf(stderr, "%s\n", message);
    exit(status);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments (including the program name).
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
        print_error(1, "Usage: ./main number_of_bytes");

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
        print_error(2, "Error: Number of bytes must be non-negative");

    unsigned char *main_address = (unsigned char *)main;

    for (int i = 0; i < num_bytes; i++)
    {
        printf("%.2x", main_address[i]);
        if (i < num_bytes - 1)
            putchar(' ');
    }
    putchar('\n');

    return (0);
}
