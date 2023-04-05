#include "main.h"
/**
  *_memset - fill block of the memory with a specific value
  *@s:address of memory to fill
  *@b:given value
  *@n:number of bytes to change
  *Return: a new value for bytes
  */
char *_memset(char *s, char b, unsigned int n)
{
	int y = 0;
	for (; n > 0; y++)
	{
		s[y] = b;
		n--;
	}
	return (s);
}
