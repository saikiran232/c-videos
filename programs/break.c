#include<stdio.h>
int main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==3)
				continue;
			if(j==7)
				break;
			printf("%d\t",j);
		}
		printf("\ni:%d\n",i);
	}
	return 0;
}

