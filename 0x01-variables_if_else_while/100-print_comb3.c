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
	int i, j;

	for(i=0; i<=9; i++)
	{
		for(j = 1; j <=9; j++)
		{
			if(j > 1)
			{
				putchar(i + '0');
				putchar(j + '0');
				if(i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

