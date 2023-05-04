#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @l: string pointer
 * Return: uppercase string pointer
 */

char *string_toupper(char *l)
{
int length_of_string;
length_of_string = 0;

while (l[length_of_string] != '\0')
{
if (l[length_of_string] >= 97 && l[length_of_string] <= 122)
{
l[length_of_string] = l[length_of_string] - 32;
}
length_of_string++;
}
return (l);
}
