#include<stdio.h>
int strcmp(const char *str1 , const char *str2)
{
	while(*str1)
	{
		if(*str1 != *str2)
		
			break;
		str1++;
		str2++;
		
	}
	return *(const unsigned char*)str1-*(const unsigned char*)str2;
}
int main()
{
	char *str1="saikiran";
	char *str2="saikiran";
	int ret =strcmp(str1,str2);
	if(ret>0)
		printf("%s","The string str1 is greater");
	else if(ret<0)
		printf("%s","The string str1 is less than str2");
	else
		printf("%s","The string str1 is equal to str2");
	return 0;


}
