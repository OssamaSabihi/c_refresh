#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 * 
 * Returns: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *array;
    char *filler;
    unsigned int i = 0;

    if(nmemb == 0 || size == 0)
        return (NULL);

    array = malloc(size * nmemb);
    if(array == NULL)
        return (NULL);

        filler = array;

    while(i < (nmemb * size))
    {
        *(filler + i) = 0;
        i++;
    }

    return (array);
}