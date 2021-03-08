#include<stdio.h>
int main(void)
{
	int n,i;
	   long int fact=1;
	printf("Enter any number \n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact*=i;
		
	}
	printf("fact=%ld\n",fact);
}
