#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a test";
    char substr[] = "is";
    char *result = strstr(str, substr);
    
    if (result != NULL) {
        printf("Substring found: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
