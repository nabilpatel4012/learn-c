/*
An escape sequence in C programming language is a sequence of characters.
It doesn't represent itself when used inside string literal or character.
It is composed of two or more characters starting with backslash '\' for example: '\n' represents new line.
*/

#include <stdio.h>

int main()
{
	printf("   \a");// Alarm or Beep
	printf("   \b");// Backspace
	printf("   \f");// Form Feed
	printf("   \n");// New Line
	printf("   \r");// Carriage Return
	printf("   \t");// Tab(Horizontal)
	printf("   \v");// Tab(Vertical)
	printf("   \\");// BackSlash
	printf("   \'");// Single quote
	printf("   \"");// Double quote
	printf("   \?");// Question mark
	printf("   \nnn ");// octal number

	return 0;
}