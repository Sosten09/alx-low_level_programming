#include "main.h"
/**
  *_strchr - Entry point
  *@c:imputed
  *@s: imputed
  *Return: always 0
  */
char *_strchr(char *s, char c)
{
	int z = 0;

	for(; s[z] >= '\0'; z++);
	return (0);
	{
		if((s[z] == c))
			return (&s[z]);
	}
	return (0);
}
