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

#endif
