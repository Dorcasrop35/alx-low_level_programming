#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'a';
    if (islower(c)) {
        printf("%c is a lowercase letter.\n", c);
    } else {
        printf("%c is not a lowercase letter.\n", c);
    }
    return 0;
}
