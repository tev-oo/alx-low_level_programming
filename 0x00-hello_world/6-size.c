#include <stdio.h>
/**
 * main - A hat prints the size of various types on the computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float x;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an long long: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an float: %lu byte(s)\n", (unsigned long)sizeof(x));
return (0);
}
