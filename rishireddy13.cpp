//write a C program that displays the position of
//a character ch in the string s or - 1 if s doesn't contain ch
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100], ch;
	char *ptr;
	printf("enter a string: ");
	gets(str);
	printf("enter a character to search: ");
	scanf("%c", &ch);
	ptr = strchr(str,ch);// strchr() to find the position of a character
	if (ptr == NULL)
	   printf("-1");
	else
	    printf("character '%c' found at position: %d", ch, ptr-str);
	return 0;
}