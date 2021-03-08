#include<stdio.h>
int func(int n,int base);
int main (void)
{
	int num,base,result;
	char choice;
	printf ("enter  'b'for binary or 'o' fpor octal:");
	scanf("%c",&choice);
	printf("enter a number:");
	scanf("%d",&num);
	base=(choice=='b')?2:8;
	result=func(num,base);
	printf("decimal number is %d\n",result);
	return 0;
}
int func(int n,int base)
{
	int rem,d,i,dec=0;
	while(n>0)
	{
		rem=n%10;
		d=rem*i;
		dec+=d;
		i*=base;
		n/=10;
	}
		return dec;
}
