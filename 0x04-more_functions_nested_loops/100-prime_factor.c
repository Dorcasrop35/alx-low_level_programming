#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
    long n = 612852475143;
    long largest_prime_factor = -1;

    while (n % 2 == 0)
    {
        largest_prime_factor = 2;
        n /= 2;
    }

    for (long i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            largest_prime_factor = i;
            n /= i;
        }
    }

    if (n > 2)
        largest_prime_factor = n;

    printf("%ld\n", largest_prime_factor);

    return (0);
}






