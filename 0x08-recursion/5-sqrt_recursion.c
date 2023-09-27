#include "main.h"

/**
 * _sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number to calculate the square root for.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if there is no natural root.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the original square root of a number.
 * @n: The number to calculate the square root for.
 *
 * Return: The original square root of n, or -1 if there is no original root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
