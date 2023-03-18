#include <stdio.h>
/**
  *main - Entry point
  *Description"program that prints numbers of base 10'
  *Return: always o
  */
int main(void)
{
	int n;

	for (n = 0 ; n < 16 ; n++)

		if (n < 10)

			putchar('0' + n);
		else

			putchar(87 + n);

	putchar('\n');
	return (0);
}
