#include "main.h"

/**
 * rev_string - Reverse a string
 *
 * @s: String to reverse
 *
 * Return: 0
 *
 */

void rev_string(char *s)
{
	int counter = 0;
	int rvrs = s[0];
	int bgn;

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (bgn = 0; bgn < counter; bgn++)
	{
		counter--;
		rvrs = s[bgn];
		s[bgn] = s[counter];
		s[counter] = rvrs;
	}
}
