#include<stdio.h>
int sum (int x, int y,int z);
int main()
{
	int a,b,c,res;
	printf("Enter the numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	res=sum(a,b,c);
	printf("%d\n",res);
	res=sum(4,5,6);
	printf("%d\n",res);
	res=sum(a+b,b*2,c/4);
	printf("%d\n",res);
	return 0;
}
int sum(int x, int y,int z)
{
	int s;
	s=x+y+z;
	return s;
}



