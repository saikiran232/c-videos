#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			{
				printf("1");
			}
				else
				{
					printf("0");
				}
		
			

	
               }
		printf("\n");

	}

	printf("\n");
	return 0;
}
