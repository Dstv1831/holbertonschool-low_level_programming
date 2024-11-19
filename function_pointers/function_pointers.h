#ifndef FUNPOINTERS_H
#define FUNPOINTERS_H

/**
 * print_name - Prints a name
 *
 * @name: Name to print
 * @f: pointer to function to call
 *
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, size_t size, int (*cmp)(int));

#endif
