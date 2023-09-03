#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'A';
    if (isalpha(c)) {
        printf("%c is an alphabetic character.\n", c);
    } else {
        printf("%c is not an alphabetic character.\n", c);
    }
    return 0;
}
