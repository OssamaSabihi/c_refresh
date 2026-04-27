#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    int i = 0;
    int j;
    
    while(s[i] != '\0')
    {
        j = 0;
        while(s[i] != accept[j])
        {
            if(accept[j] == '\0')
            return (i);
            j++;
        }
        i++;
    }
    return (i);
}
