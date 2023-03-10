#include "main.h"

/**
 * _islower - check for lowercase letters
 *
 * @c: entry point
 *
 * Return: 0 (Success)
 */

int _islower(int c)
{

        if (c >= 97 && c <= 122)
        {
                return (1);
        }

        return (0);
}
