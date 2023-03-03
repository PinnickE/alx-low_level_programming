#include "main.h"

/**
 * cap_string - Change first character to uppercase
 *
 * @a: String of characters
 *
 * Return: Camel Case Strings
 */

char *cap_string(char *a)
{
	int n = 0;

	/**
	if (a[0] != '\0' && a[0] != '\n' && a[0] != 32 &&
			a[0] != 9 && a[0] != 46 && a[0] > 96 && a[0] < 123)
	{
		a[0] = a[0] - 32;
	}
	*/

	while (a[n])
	{
		while (!(a[n] > 96 && a[n] < 123))
		{
			n++;
		}

		if (a[n - 1] == 32 || a[n - 1] == 9 || a[n - 1] == 46 || a[n - 1] == 44 ||
				a[n - 1] == 59 || a[n - 1] == 33 || a[n - 1] == 63 || a[n - 1] == 34 ||
				a[n - 1] == 40 || a[n - 1] == 41 || a[n - 1] == 123 ||
				a[n - 1] == 125 || a[n - 1] == '\n')
		{
			a[n] = a[n] - 32;
		}

		n++;
	}

	return (a);
}
