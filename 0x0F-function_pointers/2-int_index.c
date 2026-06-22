#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index -  a function that searches for an integer.
 * @array: array of integers
 * @size: the size of the array
 * @cmp: a function pointer
 * 
 * Return:  the index of the first element for which the cmp function does not return 0.
 * -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;
    if(array == NULL || cmp == NULL || size <= 0)
        return (-1);
    while(i < size)
    {
        if(cmp(array[i]) != 0)
            return (i);
        
        i++;
    }
    return (-1);
}