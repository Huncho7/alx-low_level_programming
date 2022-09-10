#include <stdio.h>
#include <stdlib.h>
/**
 * main - print combination of two digits
 *
 * Description: using the main function
 * this program prints "different combinations of two digits"
 * Return: 0
 */
int main()
{
	int digit1, digit2;

	for(digit1 = 0; digit1 < 9; digit1++)
	{
		for(digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
			continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

