#include<stdio.h>
/**
 * main - to print the size of data type
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of char: %lu", sizeof(a));
	printf("size of an int: %lu", sizeof(b));
	printf("size of a long int:%lu", sizeof(c));
	printf("size of long long int:%lu", sizeof(d));
	printf("size of a float: %lu", sizeof(e));
	return (0);
}