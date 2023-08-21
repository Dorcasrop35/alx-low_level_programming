#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	long long int result = 0; // Use a larger data type
	int i = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}

	result *= sign;

	// Handle overflow/underflow conditions
	if (result > INT_MAX)
		return INT_MAX;
	else if (result < INT_MIN)
		return INT_MIN;

	return (int)result;
}
