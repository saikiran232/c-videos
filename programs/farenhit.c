#include<stdio.h>
int main()
{
	float farin,celesius;
	int lower=0;
	int upper=300;
	int step=20;
	printf(" c        f\n\n");
	celesius=upper;
	while(celesius>=lower)
	{
		farin=(celesius*(9.0/5.)) +32.0;
		printf("%3.0f\t%6.2f\n",celesius,farin);
		celesius=celesius-step;
	}
}
