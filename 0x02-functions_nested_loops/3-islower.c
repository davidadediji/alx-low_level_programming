#include "main.h"
/**
 * _islower - checks for lowercase
 *@c: the character to check
 * Return: Always 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
