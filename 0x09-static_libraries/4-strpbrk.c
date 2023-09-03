#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a test";
    char characters[] = "aeiou";
    char *result = strpbrk(str, characters);
    
    if (result != NULL) {
        printf("Found character: %c\n", *result);
    } else {
        printf("No matching character found.\n");
    }
    return 0;
}
