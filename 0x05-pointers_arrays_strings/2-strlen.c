#include "main.h"
/**
* _strlen - return length of a string
* @s: string
* Return: length
*/
int _strlen(char *s)
{
int leni = 0;
while (*s != '\0')
{
leni++;
s++;
}
return (leni);
}
