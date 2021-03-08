#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20]="Beginnersbook";
	printf("Length of the string:%ld\n",strnlen(ch,30));
	printf("Length of the string:%ld\n",strnlen(ch,10));
	return 0;
}

