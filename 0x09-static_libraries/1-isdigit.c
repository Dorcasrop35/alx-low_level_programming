#include <stdio.h>

/* Declare the _isdigit function from the object file */
extern int _isdigit(int c);

int main() {
    char c = '5';  // Change this to any character you want to check

    if (_isdigit(c)) {
        printf("%c is a digit.\n", c);
    } else {
        printf("%c is not a digit.\n", c);
    }

    return 0;
}
