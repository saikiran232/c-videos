#include<stdio.h>
int main(void)
{
	int i,n,arr[50];
	printf("Read the numbers of values and display the reverse of the number\n");
	printf("----------------------------------------------------------------\n");
	printf("the number of the given array \n");
	scanf("%d",&n);
	printf("Input of %d the array:\n",n);
	for (i=0;i<n;i++)
	{
		printf("elements- %d\t",i);
		scanf("%d",&arr[i]);
	}
	printf("\nthe values of store into the array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
        printf("\nthe values of array to store in reverse of an array\n");
	for(i=n-1;i>=0;i--)
	{
		printf ("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}

