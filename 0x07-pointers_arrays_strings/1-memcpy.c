#include "main.h"
/**
  *_memcpy - a function that copies memory area
  *@dest:where memory stored
  *@src:bytes from memory area
  *@n:number of bytes
  *Return: memory copied with bytes change
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int z = 0;
	int y = n;

	for (; z < y; z++)
	{
		dest[z] = src[z];
		n--;
	}
	return (dest);
}
