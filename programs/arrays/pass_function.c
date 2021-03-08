#include<stdio.h>
int check(int num);
int main(void)
{
	int arr[10],i;
	printf("enter the array elements :");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		check(arr[i]);
	}
	return 0;
}
int check(int num)
{

	if(num%2==0)
		printf("%d is even number\n",num);
	else
		printf("%d is odd number\n",num);
	return num;
}
