#include <stdio.h>
/**
 * main - print the alphabet in reverse
 *
 * Description: using the main function
 * this program prints "the lowercase alphabets in reverse"
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
