#include "main.h"

int actual_sqrt_recursion(int n, int l);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be calculated
 * Return: square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - finds the natural square root of a number
 * @n: number to be calculated
 * @l: iterator
 * Return: square root
 */
int actual_sqrt_recursion(int n, int l)
{
if (l * l > n)
return (-1);
if (l * l == n)
return (l);

return (actual_sqrt_recursion(n, l + 1));
}
