#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{

int dest_len, l;
for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
;

for (l = 0; l < n && src[l] != '\0'; l++)
dest[dest_len + l] = src[l];

/*should end with a end of string char*/
dest[dest_len + l] = '\0';

return (dest);
}
