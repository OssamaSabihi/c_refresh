#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    int i = 0;
    int j,k;

    if(needle[0] == '\0')
    {
        return (haystack);
    }

    while(haystack[i] != '\0')
    {
        j = 0;
        if(needle[j] == haystack[i])
        {
            k = i;
            while(needle[j] == haystack[k])
            {
                if(needle[j] == '\0')
                    return (haystack + i);
                j++;
                k++;
            }
        }
        i++;
    }
    return (0);
}