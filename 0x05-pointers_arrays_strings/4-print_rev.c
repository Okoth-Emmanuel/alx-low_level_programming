#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: string
* return: 0
*/
void print_rev(char *s)
{
int longj = 0;
int i;
while (*s != '\0')
{
longj++;
s++;
}
s--;
for (i = longj; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
