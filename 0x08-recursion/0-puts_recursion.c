#include "main.h"
/**
 *_puts_recursion - function to print string followed by newline
 *@s:unsigned character
 */
void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
