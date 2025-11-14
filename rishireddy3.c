#include<stdio.h>
#include<conio.h>
void main()
{

   int n,i;
   printf("enter n values");
   scanf("%d",&n);
    i=n;
    do
    {
     printf("%d\n",i);
       i--;
    }
	while(i>=1);
	getch();
}