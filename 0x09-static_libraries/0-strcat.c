#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int a = -1, l;
for (l = 0; dest[l] != '\0'; l++)
;

do {
a++;
dest[l] = src[a];
l++;
} while (src[a] != '\0');

return (dest);
}
