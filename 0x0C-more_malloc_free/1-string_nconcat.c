#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *b;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;

if (n < len2)
b = malloc(sizeof(char) * (len1 + n + 1));
else
b = malloc(sizeof(char) * (len1 + len2 + 1));

if (!b)
return (NULL);
while (i < len1)
{
b[i] = s1[i];
i++;
}
while (n < len2 && i < (len1 + n))
b[i++] = s2[j++];
while (n >= len2 && i < (len1 + len2))
b[i++] = s2[j++];
b[i] = '\0';

return (b);
}
