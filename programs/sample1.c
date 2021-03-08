#include<stdio.h>
int main(void)
{
	int a=34,b=45, c=55;
	printf("the numbers is %d%d%d",a,b,c);
	a=a+b+c;
	a=a-b-c;
	c=a-b-c;
	b=a-b-c;
	printf("the values after swaping num is a=%d b=%d c=%d",a,b,c);
	return 0;
}
