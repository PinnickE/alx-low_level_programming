#include "main.h"

/**
 * string_toupper - Change character to uppercase
 *
 * @a: String of characters
 *
 * Return: Capitalised characters
 */

char *string_toupper(char *a)
{
	int n = 0;

	while (a[n] != '\0')
	{
		if (a[n] > 96 && a[n] < 122)
		{
			a[n] = a[n] - 32;
		}

		else
		{
			a[n] = a[n];
		}

		n++;
	}

	return (a);

}
