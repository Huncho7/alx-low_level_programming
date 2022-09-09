#include <stdio.h>
/**
 * main - print the lowercase and uppercase alphabets
 *
 * Description: using the main function
 * this program prints "The alphabets"
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
