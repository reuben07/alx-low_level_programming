#include "main.h"
/**
 * _puts_recursion - recursive function to print
 *
 * @s: pointer to the string
 *
 * Return: 0 (success)
 */
void _puts_recusion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
