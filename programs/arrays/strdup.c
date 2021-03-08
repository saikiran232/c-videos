#include <stdio.h>
#include<string.h>
int main()
{
	char str1[30] = "this is strdup", *str2;
	char i;
	str2 = str1;
	printf("The Original string is : %s ", str1);
	printf("\nThe duplicated string is :");
	for(i=0;str1[i]!='\0';i++)
	{
		printf("%c", *str2++);
	}
	return 0;
}
