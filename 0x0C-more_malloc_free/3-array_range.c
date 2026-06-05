#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
    int i = 0;
    int size;
    int *array;

    if(max < min)
        return (NULL);

    size = (max - min) + 1;

    array = malloc(sizeof(int) * size);
    if(array == NULL)
        return (NULL);

    while(min <= max)
    {
        *(array + i) = min;
        min++;
        i++;
    }

    return (array);
}