#include <stdio.h>
#include <string.h>

int main() {
    char dest[50] = "Hello, ";          // Destination string
    const char *src = "strncat!";      // Source string
    size_t max_chars_to_copy = 5;      // Maximum number of characters to copy

    // Use the strncat function to concatenate src to dest
    strncat(dest, src, max_chars_to_copy);

    // Print the concatenated string
    printf("Concatenated String: %s\n", dest);

    return 0;
}
