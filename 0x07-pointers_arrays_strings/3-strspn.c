#include "main.h"

/**
 * _strspn - Get the length
 * of a prefix substring
 *
 * @s: Initial segment
 * @accept: Accepted bytes
 *
 * Return: Number of bytes
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int l = 0;
	int cnt1;
	int cnt2;

	for (cnt1 = 0; s[cnt1] != '\0'; cnt1++)
	{
		if (s[cnt1] != 32)
		{
			for (cnt2 = 0; accept[cnt2] != '\0'; cnt2++)
			{
				if (s[cnt2] == accept[cnt1])
				{
					l++;
				}
			}
		}

	}

	return (l);

}
