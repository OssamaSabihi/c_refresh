#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size:is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    unsigned int i = 0;
    unsigned int cpy_len;
    void *p;
    if(new_size == old_size)
        return (ptr);

    if(ptr == NULL)
    {
        p = malloc(new_size);
        return (p);
    }
    
    if(new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    if(old_size < new_size)
        cpy_len = old_size;
    else
        cpy_len = new_size;

    p = malloc(new_size);
    if(p == NULL)
        return (NULL);
        
    while(i < cpy_len)
    {
        ((char*)p)[i] = ((char*)ptr)[i];
        i++;
    }

    free(ptr);
    return (p);

}
