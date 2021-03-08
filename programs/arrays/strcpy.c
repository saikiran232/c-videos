#include<stdio.h>
char* strcpy(char* dest, const char* sour)
{
	if(dest==NULL)
		return NULL;
	char* ptr=dest;
	while(*sour !='\0')
	{
		*dest=*sour;
	        dest++;
		sour++;
        }
		*dest='\0';
		return ptr;
}
int main()
{
	char sour[50]="Hello good morning";
	char dest[50];
	printf("%s\n",strcpy(dest,sour));
	return 0;
}

