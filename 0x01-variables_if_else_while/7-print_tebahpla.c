#include <stdio.h>
/**
  *main - Entry point
  *Discription:'smile the mirror
  *Return: always 0
  */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)

		putchar(c);

	putchar('\n');
	return (0);
}
