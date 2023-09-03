#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "12345abcde";
    char accept[] = "1234567890";
    int length = strspn(str, accept);
    printf("Length of initial segment: %d\n", length);
    return 0;
}
