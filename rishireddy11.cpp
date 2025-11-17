#include <stdio.h>
#include <string.h>
int main()
{
	char str[100], rev[100];
	int len, i, j;
	printf("enter a string: ");
	gets(str);
	len = strlen(str);
	for (j = len - 1; j >= 0; j--)
	{
		j = len - 1;
	}
	for (i = 0; i < len; i++, j--)
	{
		rev[i] = str[j];
	}
	rev[i] = '\0';
	// compare original and reversed string
	if (strcmp(str, rev) == 0)
	    printf("it is a palindrome.\n");
	else
	    printf("it is not a palidrome.\n");
	return 0;    
}