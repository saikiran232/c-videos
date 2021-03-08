#include<stdio.h>
int main(void)
{
	int n1=0,n2=1,sum,i,n;
	printf("number of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
     {
	sum=n1+n2;
        printf("%d\t\n",sum);
	n1=n2;
	n2=sum;
     } 
	
       return 0;
}       


