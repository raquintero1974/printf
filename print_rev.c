#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
*print_rev - prints astring in reverse
*@r: string to print
*Return: number of chars printed
*/
int print_rev(va_list r)
{
char *st;
int i, j = 0;
 
st = va_arg(r, char *);
if (st == NULL)
st = ")llun(";
for (i = 0; st[i] != '\0'; i++)
;
for (i -= 1 ; i >= 0; i--)
{
_putchar(st[i]);
j++;
}
return (j);
}

print_rot13.c
#include "main.h"
#include <stdio.h>
/**
 * print_rot13 - encodes a string into rot13.
 * @R: string to convert
 * Return: size the output text
 */
int print_rot13(va_list R)
{
int j, i, count = 0;
char *r;
char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";
 
r = va_arg(R, char *);
if (r == NULL)
r = "(null)";
for (j = 0; r[j] != '\0'; j++)
{
for (i = 0; input[i] != '\0'; i++)
{
if (r[j] == input[i])
{
_putchar(output[i]);
count++;
break;
}
}
}
return (count);
}

print_string.c
 
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_string - writes the character c to stdout
 * @s: The string to print
 *
 * Return: 1.
 */
int print_string(va_list s)
{
char *my_string;
int  i = 0;
 
my_string = va_arg(s, char *);
if (my_string == NULL)
my_string = "(null)";
while (my_string[i])
{
_putchar(my_string[i]);
i++;
}
return (i);
}
