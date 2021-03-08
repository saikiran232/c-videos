#include<stdio.h>
#include<stdlib.h>
	char* strcat(char* dest ,const char* sour)
	{
		int i,j;
		for(i=0;dest[i] !='\0';i++)
			for(j=0;sour[j]!='\0';j++)
				dest[i+j]=sour[j];
		dest[i+j]='\0';
		return dest;
	}
int main()
{
	char* str=(char*)calloc(100,1);
	strcat(str,"sai");
	strcat(str,"kiran");
	strcat(str,"  good");
	strcat(str,"boy");
	strcat(str,"  Doing string catenation");
	puts(str);
	return 0;
}


