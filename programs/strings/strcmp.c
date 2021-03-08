#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="Saikiran";
	char str2[20]="saikiran";
	if (strcmp(str1,str2)==0)
	{
		printf("string1 and string2 are equal");
	}
	else{
		printf("string1=%s and string2=%s are different\n",str1,str2);
	}
	return 0;
}
