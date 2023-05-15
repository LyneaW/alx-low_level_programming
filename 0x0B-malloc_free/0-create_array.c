#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes
 *it with a specific char
 * @c: char to fill
 * Return: array filled
 */

char *create_array(unsigned int size, char c)
{
unsigned int l;
char *b;

if (size == 0)
return (NULL);
b = malloc(size * sizeof(char));

if (b == NULL)
return (NULL);
for (l = 0; l < size; l++)
{
b[l] = c;
}

return (b);
}
