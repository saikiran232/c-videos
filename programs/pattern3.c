#include<stdio.h>
int main(void)
{
	int n,m,i,j,k;
	printf("enter the numbers of row:");
	scanf("%d",&n);
	m=n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=m;j++)
		{
			printf(" ");
		}
                for(k=1;k<=2*i-1;k++)
		{
		if(k==1||k==2*i-1||i==n)
			printf("*");
		else
			printf(" ");
		}
		m++;
		printf("\n");
	}
	return 0;
}
