#include<stdio.h>
int main(void)
{
	int a,b,c;
	float avg;
	printf( "enter  the three integer value:");
	scanf("%d%d%d", &a, &b, &c);
	avg =(a+b+c)/3;
	printf("avg before casting is %f",avg);
	avg=(float) (a+b+c)/3;
	printf("avg after casting is %f",avg);
	return 0;
}
