#include "main.h"
/**
 * _isalpha - checks for alphaphetic character
 *
 * @c: the character to be checked
 *
 * Return: 1 for alphabetic character and 0 for the rest
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
