#include <stdio.h>
#include <string.h>

/* Declare the strncat function from the object file */
extern char *strncat(char *dest, const char *src, size_t n);

int main() {
    char dest[50] = "Hello, ";     // Destination string
    const char *src = "strncat!"; // Source string

    // Use the strncat function from 1-strncat.o
    strncat(dest, src, 5);

    // Print the concatenated string
    printf("Concatenated String: %s\n", dest);

    return 0;
}
