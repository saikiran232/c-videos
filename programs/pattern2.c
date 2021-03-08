#include<stdio.h>
int main (void)
{
	int i,j,k,n;
	printf("enter the numbers  of rows :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n;k++)
		{
			
			if(i==1||i==n||k==1||k==n)
			
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
return 0;
}


