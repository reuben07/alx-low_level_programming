#include "main.h"
/**
 * _islower - Checks for lowercse alphabet
 * @c: Character to be checked
 * Return: if character is lowecase, otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
