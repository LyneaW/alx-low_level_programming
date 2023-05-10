#include "main.h"
#include <stdio.h>

int check_prime(int n, int l);
/**
 * is_prime_number - returns if number is prime
 * @n: number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
 * check_prime - check if number is prime
 * @n: number to be checked
 * @l: iteration times
 * Return: 1 for prime or 0 composite
 */
int check_prime(int n, int l)
{
if (n <= 1)
return (0);

if (n % l == 0 && l > 1)
return (0);

if ((n / l) < l)
return (1);

return (check_prime(n, l + 1));
}
