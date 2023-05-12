#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - find the length of a string
 * @dest: pointer to the string
 * @src: pointer
 * @n: int
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
int l;

for (l = 0; l < n && src[l] != '\0'; l++)
dest[l] = src[l];

for (; l < n; l++)
dest[l] = '\0';

return (dest);
}
