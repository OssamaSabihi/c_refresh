#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

 char *_strdup(char *str)
 {
    int i = 0;
    int j = 0;
    if(str == NULL)
        return (NULL);
    while(str[i] != 0)
        i++;
    char *array = malloc(sizeof(char) * (i + 1));
    if(str == 0 || array == NULL)
        return (NULL);
    while(j <= i)
    {
        array[j] = str[j];
        j++;
    }
    return (array);
 }