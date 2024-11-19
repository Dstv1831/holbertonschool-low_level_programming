#ifndef FUNPOINTERS_H
#define FUNPOINTERS_H

/**
 * forward declaration of the functions to use 
 * when including the header file
 *
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, size_t size, int (*cmp)(int));


#endif
