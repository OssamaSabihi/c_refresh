#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

 int **alloc_grid(int width, int height)
 {
    int i = 0;
    int j;
    if(width <= 0 || height <= 0)
      return (NULL);

    int **array = malloc(sizeof(int *) * height);

    if(array == NULL)
      return (NULL);

    while(i < height)
    {
      array[i] = malloc(sizeof(int) * width);
      if(array[i] == NULL)
      {
        while(i >= 0)
        {
          free(array[i]);
          i--;
        }
        free(array);
        return (NULL);
      }
      j = 0;
      while(j < width)
      {
        array[i][j] = 0;
        j++;
      }
      i++;
    }

    return (array);
 }