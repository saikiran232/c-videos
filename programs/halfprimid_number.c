#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("enter the number of row :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n ");
	}
return 0;
}

