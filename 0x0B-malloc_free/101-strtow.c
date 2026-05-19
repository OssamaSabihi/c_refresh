#include "main.h"
#include <stdlib.h>

/*
 * spacecounter - a function that counts the number of 
 * the first consecutive spaces it findes inside a string
 * @str: input string
 * 
 * returns: the number of spaces.
 */

int spacecounter(char *str)
{
    if( *str == '\0')
        return (0);
    if(*str == ' ')
        return (1 + spacecounter(str + 1));

    return(0);
}

/* wordcounter - a function that counts how many words
 * is inside a string
 * @str: input string
 * 
 * returns: the number of words 
 */

int wordcounter(char *str)
{
    int i = 0;
    int words = 0;

    if(str == NULL)
        return (0);

    if(*str == '\0')
        return (0);

    if(str[i] == ' ')
    {
        i += spacecounter(str + i);
    }

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            words++;
            i += spacecounter(str + i);
        }
        else
            i++;
    }

    if(str[i - 1] != ' ')
        words++;

    return(words);
}

/*
 * strtow - a function that splits a string into words
 * @str: input string
 * 
 * returns: A pointer to an array of strings
 */

char **strtow(char *str)
{
    int i = 0;
    int j = 0;
    int k;
    int lenght;
    int wordstart = 0;
    int wordsnum = wordcounter(str);
    char **array;
    if (str == NULL || wordsnum == 0)
    return (NULL);
    array = malloc(sizeof(char *) * (wordsnum + 1));
    if(array == NULL)
        return (NULL);

    while(i < wordsnum)
    {
        if(str[j] == ' ')
            j += spacecounter(str + j);

        wordstart = j;

        lenght = 0;
        while(str[j] != ' ' && str[j] != '\0')
        {
            lenght++;
            j++;
        }

        array[i] = malloc(sizeof(char) * (lenght + 1));

        if(array[i] == NULL)
        {
            while(i > 0)
            {
                i--;
                free(array[i]);
            }
            free(array);
            return (NULL);
        }
        k = 0;
        while(wordstart < j)
        {
            array[i][k] = str[wordstart];
            wordstart++;
            k++;
        }
        array[i][k] = '\0';
        j += spacecounter(str + j);
        i++;
    }
    
    array[i] = NULL;

    return (array);

}



