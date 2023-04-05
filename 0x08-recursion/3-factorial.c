#include "main.h"
/**
  *factorial - return factoria;l of a number
  *@n:the number used
  *Return:factorial of n
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
