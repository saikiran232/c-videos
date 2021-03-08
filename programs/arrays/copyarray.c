#include<stdio.h>
int main(void)
{
	int i,arr1[100],arr2[100],n;
	printf("copy array from the one array to another array:\n");
        printf("------------------------------------------------\n");
        printf("Input to the the numberof array to store the elements\n");
        scanf("%d",&n);
        printf("Input %d elements in the array:\n",n);
        for(i=0;i<n;i++)
        {  
	printf("elements-%d:",i);
        scanf("%d",&arr1[i]);
	}
        for(i=0;i<n;i++)
        {
	arr2[i]=arr1[i];
	}
        printf("the elements stored in first array is the:\n");
	for(i=0;i<n;i++)
        {
        printf("%d\t",arr1[i]);
	}
        printf("\nthe elements are copied into the second array:\n");
	for(i=0;i<n;i++)
        {
		printf("%d\t",arr2[i]);
	}
        printf("\n\n");
        return 0;
}

