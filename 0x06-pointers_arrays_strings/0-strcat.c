#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: destination string pointer
 */

char *_strcat(char *dest, char *src)
{
int length_of_string, w;

length_of_string = 0;
while (dest[length_of_string] != '\0')
{
length_of_string++;
}
for (w = 0; src[w] != '\0'; w++, length_of_string++)
{
dest[length_of_string] = src[w];
}
dest[length_of_string] = '\0';
return (dest);
}
