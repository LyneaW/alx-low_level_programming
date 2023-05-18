#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
int *p;
int l, size;

if (min > max)
return (NULL);

size = max - min + 1;
p = malloc(sizeof(int) * size);
if (p == NULL)
return (NULL);

for (l = 0; min <= max; l++)
p[l] = min++;

return (p);
}
