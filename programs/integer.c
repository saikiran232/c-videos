#include<stdio.h>
int main(void)
{
	int num;
	printf("ENTER THE NUMBER: \n");
	scanf("%d", &num);
	if(num >0)
		printf("%d is positive num \n",num);
		else if(num<0)
			printf("%d is negitive num \n",num);
		else 
			printf("0  is neither positve or negitive ");
}	
