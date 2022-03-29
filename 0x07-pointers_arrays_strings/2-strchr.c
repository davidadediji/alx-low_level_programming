#include "main.h"
/**
 *_strchr - function that locates a character in a string
 *@s:string
 *@c:character
 *Return:NULL or first occurence of char
 */
char *_strchr(char *s, char c)
{
	int i;

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}