#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i;
	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encoded = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') ||
		    (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = encoded[original - s[i]];
		}
	}
	return (s);
}






