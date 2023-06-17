#include <stdio.h>

/**
 * main - Prints possible different number combination three digits
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int digit1 = 0;
	int digit2;
	int digit3;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			digit3 = 0;
			while (digit3 <= 9)
			{
				if (digit1 != digit2 && digit1 < digit2 && digit2 != digit3 &&
						digit2 < digit3)
				{
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(digit3 + '0');
					if (digit1 + digit2 + digit3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
