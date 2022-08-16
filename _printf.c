#include "main.h"

/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */
int _printf(char *format, ...)
{
int typed = 0, (*structype)(char *, va_list);
char q[3];
va_list pa;

if (format == NULL)
return (-1);
q[2] = '\0';
va_start(pa, format);
_putchar(-1);
while (format[0])
{
if (format[0] == '%')
{
structype = driver(format);
if (structype)
{
q[0] = '%';
q[1] = format[1];
typed += structype(q, pa);
}
else if (format[1] != '\0')
{
typed += _putchar('%');
typed += _putchar(format[1]);
}
else
{
typed += _putchar('%');
break;
}
format += 2;
}
else
{
tyed += _putchar(format[0]);
format++;
}
}
_putchar(-2);
return (typed);
}
