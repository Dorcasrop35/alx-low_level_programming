#include <stdio.h>
#include <stdlib.h>

int is_positive_number(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}

void multiply(char *num1, char *num2) {
    int len1 = 0, len2 = 0;
    while (num1[len1] != '\0') len1++;
    while (num2[len2] != '\0') len2++;

    int result_len = len1 + len2;
    int *result = malloc(result_len * sizeof(int));

    for (int i = 0; i < result_len; i++) {
        result[i] = 0;
    }

    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        int num1_digit = num1[i] - '0';

        for (int j = len2 - 1, k = i + len2; j >= 0; j--, k--) {
            int num2_digit = num2[j] - '0';
            int product = num1_digit * num2_digit + result[k] + carry;
            result[k] = product % 10;
            carry = product / 10;
        }

        result[i] += carry;
    }

    int start_index = 0;
    while (start_index < result_len && result[start_index] == 0) {
        start_index++;
    }

    if (start_index == result_len) {
        printf("0\n");
    } else {
        for (int i = start_index; i < result_len; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
    }

    free(result);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!is_positive_number(argv[1]) || !is_positive_number(argv[2])) {
        printf("Error\n");
        return 98;
    }

    multiply(argv[1], argv[2]);

    return 0;
}
