#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string pointer
 * Return: Always 0
 */

void rev_string(char *s)
{
int length, w, half;
char temp;

for (length = 0; s[length] != '\0'; length++)
;
w = 0;
half = length / 2;

while (half--)
{
temp = s[length - w - 1];
s[length - w - 1] = s[w];
s[w] = temp;
w++;
}
}
