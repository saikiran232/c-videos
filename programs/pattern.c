#include<stdio.h>
int main (void)
{
	int n,i,j;
	printf("enter the numbers of row:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}return 0;
}
