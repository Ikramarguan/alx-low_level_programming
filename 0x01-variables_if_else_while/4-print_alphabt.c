#include <stdio.h>
/**
 * main - entry point
 *
 * description: print all the alphabet in lowercase except q and e
 * Return: always 0 (success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'q' || ch == 'e')
ch++;
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
