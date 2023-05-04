#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be concatenated
 * Return: destination string pointer
 */

char *_strncat(char *dest, char *src, int n)
{
int length_of_string, w;
/* w is a counter for n bytes of src to be concatenated */
/* length_of_string = length of destination string */

length_of_string = 0;
while (dest[length_of_string] != '\0')
{
length_of_string++;
}
for (w = 0; w < n && src[w] != '\0'; w++, length_of_string++)
{
dest[length_of_string] = src[w];
}
dest[length_of_string] = '\0';
return (dest);
}
