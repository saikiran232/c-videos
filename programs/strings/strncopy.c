#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[50]="string1";
	char str2[100]="string2:n numbers copy to one string another string";
	strncpy(str1,str2,15);
	printf("string copy to another :%s",str1);
	return 0;
}

