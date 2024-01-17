#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
int linear_search(int *array, size_t size, int value);
void print_search(int *array, int first, int last);
int binary_search(int *array, size_t size, int value);
int recursive_binary_search(int *array, int left, int right, int value);


#endif /* SEARCH_ALGOS_H */
