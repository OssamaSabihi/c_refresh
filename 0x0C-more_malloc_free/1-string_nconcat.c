#include "main.h"
#include <stdlib.h>

/**
 * strlen - Returns length of a string.
 * @s: The string  measured.
 *
 * Return: length of the string.
 */

unsigned int _strlen(char *s)
{
    if(*s != '\0')
    {
       return 1 + _strlen(s + 1);
        
    }
    return (0);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to take from the second string
 * 
 * Returns: a pointer in success or NULL in failuir
 */

 char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
    unsigned int s1len, s2len, s2cpy;
    int i = 0;
    unsigned int j = 0;
    char *c;

   if(s1 == NULL)
      s1 = "";
   if(s2 == NULL)
      s2 = "";

    s1len = _strlen(s1);
    s2len = _strlen(s2);
    
   if(n >= s2len)
      s2cpy = s2len;
   else
      s2cpy = n;

   c = malloc(sizeof(char) * (s1len + s2cpy + 1));
   if(c == NULL)
      return (NULL);

   while(s1[i] != '\0')
   {
      c[i] = s1[i];
      i++;
   }
   while(j < s2cpy)
   {
      c[i] = s2[j];
      i++;
      j++;
   }

   c[i] = '\0';

   return (c);
 }