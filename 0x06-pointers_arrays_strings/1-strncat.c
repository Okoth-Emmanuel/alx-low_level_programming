#include "main.h"
/**
 * _strncat -  a function that concatenates two strings.
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int k;

i = 0;
while (dest[i] != '\0')
{
i++;
}
k = 0;
while (k < n && src[k] != '\0')
{
dest[i] = src[k];
i++;
k++;
}
dest[i] = '\0';
return (dest);
}

