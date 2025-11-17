#include <stdio.h>
#include <string.h>
void deletechars(char str[], int pos, int n)
{
	int len = strlen(str);
	// shift characters to left
	for (int i = pos; i <= len; i++)
	{
		str[i] = str[i + n];
	}
}
int main()
{
	char str[100];
	int pos, n;
	puts("enter the string: ");
	gets(str);
	printf("enter the position to delete from (starting from 0): ");
	scanf("%d", &pos);
	printf("enter number of characters to delete: ");
	scanf("%d", &n);
	deletechars(str, pos, n);
	printf("strimg after deletion: %s\n", str);
	return 0;
}
