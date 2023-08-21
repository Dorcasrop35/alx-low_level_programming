#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
    int password_length = 10; // Set your desired password length here
    char password[password_length + 1]; // +1 for the null terminator
    int i;

    /* Seed the random number generator with the current time */
    srand(time(NULL));

    /* Generate random characters for the password */
    for (i = 0; i < password_length; i++)
    {
        password[i] = rand() % 26 + 'A'; // Generates random uppercase letters
    }
    password[password_length] = '\0'; // Add the null terminator

    printf("%s\n", password);

    return (0);
}
