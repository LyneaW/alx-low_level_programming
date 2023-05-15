#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: string to be duplicated
 */

char *_strdup(char *str)
{
int l = 0, w = 1;
char *b;

if (str == NULL)
return (NULL);
while (str[w])
{
w++;
}
b = malloc((sizeof(char) * w) +1);

if (b == NULL)
return (NULL);
while (l < w)
{
b[l] = str[l];
l++;
}
b[l] = '\0';
return (b);
}
