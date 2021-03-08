#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int l;
	printf("Enter a string:");
	gets(str);
	for(l=strlen(str)-1;l>=0;l--)
		printf("%c",str[l]);
	printf("\n");
	return 0;
}

