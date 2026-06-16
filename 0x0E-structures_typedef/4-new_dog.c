#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
int str_len(char *s);
char *str_cpy(char *src, char *dst);

dog_t *new_dog(char *name, float age, char *owner)
{
    int ln, lo;
    dog_t *dog;

    if(name == NULL || owner == NULL)
        return (NULL);

    dog = malloc(sizeof(dog_t));
    if(dog == NULL)
        return (NULL);

    ln = str_len(name);
    dog->name = malloc(sizeof(char) * (ln + 1));
    if(dog->name == NULL)
    {
        free(dog);
        return (NULL);
    }

    lo = str_len(owner);
    dog->owner = malloc(sizeof(char) * (lo + 1));
    if(dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }

    str_cpy(name, dog->name);
    str_cpy(owner, dog->owner);
    dog->age = age;

    return (dog);
}

int str_len(char *s)
{
    if(s == NULL || *s == '\0')
        return (0);

    return (1 + str_len(s + 1));
}
char *str_cpy(char *src, char *dst)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';

    return (dst);
}