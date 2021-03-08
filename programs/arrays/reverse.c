#include<stdio.h>
int main(void)
{
	int i,j,temp,arr[10]={3,4,5,6,8,7,9,10,11,12};
	for(i=0,j=9;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("after reversing, the array is:\t");
	for(i=0;i<10;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	return  0;
}

