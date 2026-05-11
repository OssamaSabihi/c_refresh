#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

 char *str_concat(char *s1, char *s2)
 {
    char *s;
    int i = 0;
    int lenght1 = 0;
    int lenght2 = 0;

    if(s1 == NULL)
        s1 = "";
    if(s2 == NULL)
        s2 = "";

    while(*(s1 + lenght1) != '\0')
        lenght1++;
    while(*(s2 + lenght2) != '\0')
        lenght2++;

    s = malloc(sizeof(char) * (lenght1 + lenght2 + 1));

    if(s == NULL)
        return (NULL);

    lenght1 = 0;
    lenght2 = 0;

    while(*(s1 + lenght1) != '\0')
    {
        *(s + i) = *(s1 + lenght1);
        lenght1++;
        i++;
    }

    while(*(s2 + lenght2) != '\0')
    {
        *(s + i) = *(s2 + lenght2);
        lenght2++;
        i++;
    }

    *(s + i) = '\0';

    return (s);
 }