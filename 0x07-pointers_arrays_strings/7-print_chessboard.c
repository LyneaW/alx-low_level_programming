#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
int s, t;

for (s = 0; s < 8; s++)
{
for (t = 0; t < 8; t++)
_putchar(a[s][t]);
_putchar('\n');
}
}
