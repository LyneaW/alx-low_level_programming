#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int c;

for (c = 0; c < n; c++)
dest[c] = src[c];

return (dest);
}
