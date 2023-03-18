#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  *Description:'program that prints the alphabet'
  */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	putchar('\n');
	return (0);



}
