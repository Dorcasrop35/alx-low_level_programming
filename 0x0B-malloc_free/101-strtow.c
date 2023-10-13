#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return (NULL);

    int i, j, k, len, word_count;
    char **words;

    word_count = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            word_count++;
    }

    words = (char **)malloc(sizeof(char *) * (word_count + 1));

    if (words == NULL)
        return (NULL);

    k = 0;
    for (i = 0; i < word_count; i++)
    {
        while (str[k] == ' ')
            k++;

        len = 0;
        while (str[k + len] && str[k + len] != ' ')
            len++;

        words[i] = (char *)malloc(sizeof(char) * (len + 1));

        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return (NULL);
        }

        for (j = 0; j < len; j++)
            words[i][j] = str[k + j];

        words[i][j] = '\0';
        k += len;
    }

    words[i] = NULL;
    return (words);
}
