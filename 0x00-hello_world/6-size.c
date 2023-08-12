#include <stdio.h>
/**
 * main - A program that prints various types on the computer it is compiled and run on
 * Return 0
 */
int main(void)
{       
char a;
int b;
long int c;
long long int d;
float fh;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of long long int %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of float %lu byte(s)\n", (unsigned long)sizeof(fh));
return (0);
}
