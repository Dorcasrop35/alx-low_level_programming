#include <stdio.h>
#include <string.h>

/* Declare the memcpy function from the object file */
extern void *memcpy(void *dest, const void *src, size_t n);

int main() {
    char src[] = "Hello, memcpy!"; // Source data
    char dest[20];               // Destination buffer

    // Use the memcpy function from 1-memcpy.o
    memcpy(dest, src, strlen(src) + 1);

    // Print the copied string
    printf("Copied String: %s\n", dest);

    return 0;
}
