#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
	printf("size of an int: %zu byte(s)\n",(unsigned long) sizeof(int));
	printf("size of a long int: %zu bytes(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %zu bytes(s)\n", (unsigned long)sizeof(long long int));
	printf("size of a float: %zu bytes(s)\n", (unsigned long)sizeof(float));
	return (0);
}
