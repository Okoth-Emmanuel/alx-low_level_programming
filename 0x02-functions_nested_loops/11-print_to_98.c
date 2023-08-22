#include <stdio.h>
#include "main.h"
/**
* print_to_98 - to print all natural numbers from n to 98,
* followed by a new line
* @n: print from this number
*/
void print_to_98(int n)
{
int r, t;
if (n <= 98)
{
for (r = n; r <= 98; r++)
{
if (r != 98)
printf("%d, ", r);
else if (r == 98)
printf("%d\n", r);
}
} 
else if (n >= 98)
{
for (t = n; t >= 98; t--)
{
if (t != 98)
printf("%d, ", t);
else if (t == 98)
printf("%d\n", t);
}
}
}
