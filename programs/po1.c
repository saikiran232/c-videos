#include<stdio.h>
int main(void)
{
	int i,n,sum=0,term=1;
	printf("Enter the number of term ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+term;
		term=term+i;
	}
	printf("sum of this series upto %d terms is %d\n",n,sum);
	return 0;
}

