#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abc";
    char str2[] = "def";
    int result = strcmp(str1, str2);
    printf("Comparison result: %d\n", result);
    return 0;
}
