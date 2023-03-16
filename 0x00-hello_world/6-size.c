#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	printf("size of char: %d bytes(s)", sizeof(char));
	printf("size of an int: %d bytes(s)", sizeof(int));
	printf("size of a long int: %d bytes(s)", sizeof(long int));
	printf("size of a long long int: %d bytes(s)", sizeof(long long int));
	printf("size of a float: %d bytes(s)", sizeof(float));
	return (0);
}
