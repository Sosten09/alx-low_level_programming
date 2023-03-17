#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu bytes()\n", sizeof(int));
	printf("size of a long int: %lu bytes()\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
