#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Copy me!";
    char dest[20];
    strncpy(dest, src, 5);
    dest[5] = '\0'; // Ensure null-terminated
    printf("Copied String: %s\n", dest);
    return 0;
}
