#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	printf("size of char: %lu bytes(s)", sizeof(char));
	printf("size of an int: %lu bytes(s)", sizeof(int));
	printf("size of a long int: %lu bytes(s)", sizeof(long int));
	printf("size of a long long int: %lu bytes(s)", sizeof(long long int));
	printf("size of a float: %lu bytes(s)", sizeof(float));
	return (0);
}
