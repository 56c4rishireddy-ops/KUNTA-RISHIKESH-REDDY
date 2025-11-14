//Finding Minimum & Maximum in One-Dimensional Array
#include<stdio.h>
int main(void)
{
	int arr[6], i, j, min, max;
	//Reading values into the array[6]
	printf("enter any 6-elements for arr[6]:\n");
	for(i=0;i<6;i++, j++)
	    scanf("%d",&arr[i], &arr[j]);
	    //Finding miminum and maximum 
	    min=max=arr[0];
	    for(i=0;i<6;i++,j++)
	    {
	    	if(min>arr[i,j]) min=arr[i,j];
	    	if(max<arr[i,j]) max=arr[i,j];
		}
		printf("\nMinimum in arr[6]: %d", min);
		printf("\nMaximum in arr[6]: %d", max);
}