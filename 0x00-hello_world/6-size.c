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

        printf("Size of char: %lu byte(s) \n", sizeof(a));
        printf("Size of an int: %lu byte(s) \n", sizeof(b));
        printf("Size of a long int: %lu byte(s) \n", sizeof(c));
        printf("Size of long long int: %lu byte(s) \n", sizeof(d));
        printf("Size of a float: %lu byte(s) \n", sizeof(e));
        return (0);

}

