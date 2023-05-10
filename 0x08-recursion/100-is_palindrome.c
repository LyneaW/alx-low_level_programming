#include "main.h"

int check_pal(char *s, int l, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be reversed
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of string
 * @s: string to be calculated
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters for palindrome
 * @s: string
 * @l: iterator
 * @len: string length
 * Return: 1 if palindrome and 0 if not
 */
int check_pal(char *s, int l, int len)
{
if (*(s + l) != *(s + len - 1))
return (0);
if (l >= len)
return (1);

return (check_pal(s, l + 1, len - 1));
}

