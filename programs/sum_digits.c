#include<stdio.h>
int main(void)
{
	int n,prod=1,rem;
	printf("Enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		/*sum+=rem;*/
		prod*=rem;
		n=n/10;
	}
         /*printf("sum of digts=%d\n",sum);*/
           printf("product of digits=%d\n",prod);

	return 0;
}
