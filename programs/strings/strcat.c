#include<stdio.h>
int main()
{
	char str1[10]="Iam";
	char str2[10]="Badboy";
	//char str3[10]="Handsome"
	int i,temp;
	temp=0;
	while(str1[temp]!='\0')
	{
		++temp;
	}
	for(i=0;str2[i]!='\0';++i,++temp)
	{
		str1[temp]=str2[i];
	}
	str1[temp]='\0';

	printf("output string after concatenation:%s\n",str1);
	return 0;
}

