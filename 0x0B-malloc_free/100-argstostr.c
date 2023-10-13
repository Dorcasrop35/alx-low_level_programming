#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, total_len = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
		total_len++; /* for '\n' */
	}

	total_len++; /* for '\0' */

	concatenated = (char *)malloc(sizeof(char) * total_len);

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concatenated[k] = av[i][j];
			k++;
		}
		concatenated[k] = '\n';
		k++;
	}
	concatenated[k] = '\0';

	return (concatenated);
}
