#include<stdio.h>
int fun1(int a);
int fun2(int a,int b,int c);
int fun3(int a,int b);
int main()
{
	int res;
	res= fun1(10)-fun3(10,3)/fun2(10,20,30);
	printf("%d",res);
	return 0;
}
int fun1(int a)
{
	int s;
	s=--a;
	return s;
}
int fun2(int a,int b,int c)
{

	
