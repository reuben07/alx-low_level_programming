#include <stdio.h>
/**
 * main - printing numbers below sixteen
 *
 * Return: (0)
 *
 */
int main(void)
{
	char numbers = '0';

	while (numbers <= '16')
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
