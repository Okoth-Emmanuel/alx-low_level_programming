#include <stdio.h>
/**
* main - fibonacci <3
* Purpose - no hardcode
* Return: 0 Always (Success)
*/
int main(void)
{
unsigned long int a;
unsigned long int bef = 1;
unsigned long int aft = 2;
unsigned long int u = 1000000000;
unsigned long int bef1;
unsigned long int bef2;
unsigned long int aft1;
unsigned long int aft2;
printf("%lu", bef);
for (a = 1; a < 91; a++)
{
printf(", %lu", aft);
aft += bef;
bef = aft - bef;
}
bef1 = (bef / u);
bef2 = (bef % u);
aft1 = (aft / u);
aft2 = (aft % u);
for (a = 92; a < 99; ++a)
{
printf(", %lu", aft1 + (aft2 / u));
printf("%lu", aft2 % u);
aft1 = aft1 + bef1;
bef1 = aft1 - bef1;
aft2 = aft2 + bef2;
bef2 = aft2 - bef2;
}
printf("\n");
return (0);
}

