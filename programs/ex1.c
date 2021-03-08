#include <stdio.h>
int main(void)
{
	int a,b,c;
	printf("Enter the three numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	
	if ((a>b)&&(a>c))
		printf("%d is greater\n",a);
	else if((b>a)&&(b>c))
		printf("%dis  greater\n",b);
	else if((c>a) && (c>b))
		printf("%d is greater\n" ,c);
	else 
		printf("the numbers are unique\n");
	
	return 0;
}

