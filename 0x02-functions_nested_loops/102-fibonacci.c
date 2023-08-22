#include <stdio.h>
/**
* main - Print first 50 Fibonacci numbers, starting with 1 and 2,
* separated by a comma followed by a space.
**
Return: always 0.
*/
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, total;
for (count = 0; count < 50; count++)
{
total = fib1 + fib2;
printf("%lu", total);
fib1 = fib2;
fib2 = total;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
