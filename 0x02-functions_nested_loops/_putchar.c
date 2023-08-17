#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character z to stdout
 * @z: character to be printed
 *
 * Return: 1 On success
 * On error, returnes -1, and errno is set appropriately.
 */
int _putchar(char z)
{
return (write(1, &z, 1));
}
