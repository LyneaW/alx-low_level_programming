#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int r;

for (r = 0; s[r] >= '\0'; r++)
{
if (s[r] == c)
return (s + r);
}

return (NULL);
}
