#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Copy me!";
    char dest[20];
    strcpy(dest, src);
    printf("Copied String: %s\n", dest);
    return 0;
}
