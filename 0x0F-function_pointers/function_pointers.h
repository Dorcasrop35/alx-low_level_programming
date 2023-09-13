#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* Prototype for print_name function */
void print_name(char *name, void (*f)(char *));

/* Prototype for _putchar function */
int _putchar(char c);

#endif /* FUNCTION_POINTERS_H */
