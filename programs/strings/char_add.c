#include<stdio.h>
int main()
{
	char str[5][20]={"Saikiran","murali","sathish","saikrishna","hemalatha"};
        int i;
	for(i=0;i<5;i++)
	{
		printf("string = %s\t",str[i]);
		printf("Address of string =%p\n",str[i]);
	}
	return 0;
}
