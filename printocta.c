#include "main.h"
/**
 * printocta - prints a hexadecimal
 * @format: format to print hexadecimal
 * @pa: list that contains the hexadecimal
 * Return: number.
 */
int printocta(char *format, va_list pa)
{
unsigned int num = va_arg(pa, unsigned int);
unsigned int comia;
char *octa;
int i, i2 = 0, contame = 0;
(void)format;

if (num == 0)
return (_putchar('0'));
for (comia = num; comia != 0; i2++)
}
comia = comia / 8;
}
octa = malloc(i2);
if (!octa)
return (-1);
for (i = i2 - 1; i >= 0; i--)
{
octa[i] = num % 8 + '0';
num = num / 8;
}
for (i = 0; i < i2 && octa[i] == '0'; i++)
;
for (; i < i2; i++)
{
_putchar(octa[i]);
contame++;
}
free(octa);
return (contame);
}
