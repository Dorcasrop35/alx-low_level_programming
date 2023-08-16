#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times followed by a new line.
 *
 * Description: This function prints the lowercase alphabet 10 times, with each
 * alphabet set followed by a newline character.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}







