#include<stdio.h>
int main()
{
	int a[2][2]={10,20,30,40},r,c;
	a[0][2]=100;
	a[1][2]=200;
	puts("elements are:");
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%4d",a[r][c]);
		}
		printf("\n");
	}
	return 0;
}


