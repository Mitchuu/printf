#include "main.h"

/**
 * funtion - prints a string
 * new line, to stdout.
 * @string: input string
 * Return: count of string.
 */
int function(char *string)
{
int contador = 0;

while (*string)
{
_putchar(*string);
string++;
contador++;
}
return (contador);
}
