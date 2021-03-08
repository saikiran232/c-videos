#include<stdio.h>
int main()
{
	int a=28;
	double b=36.234;
	int *p1=&a;
	double *p2=&b;
           printf("the value of p1=The address of a= %p\n",p1);
	   printf("the value of p2=The address of b= %p\n",p2);
	   printf("The address of p1=%p\n",&p1);
	   printf("The address of p2=%p\n",&p2);
	   printf("The value of a= %d %d %d \n",a,*p1,*(&a));
	   printf("The value of b=%.1f %.1f %.1f \n",b,*p2,*(&b));


	return 0;
}
