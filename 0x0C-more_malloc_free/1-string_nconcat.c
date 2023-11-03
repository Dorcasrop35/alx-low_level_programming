#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with n bytes of s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, i;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	concatenated = malloc(s1_len + n + 1);

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];

	for (i = 0; i < n; i++)
		concatenated[s1_len + i] = s2[i];

	concatenated[s1_len + n] = '\0';

	return (concatenated);
}
