#include<stdio.h>
int main()
{
char a[100];
int i;
printf("Enter any string");
gets(a);
printf("Entered string is ");
for(i=0;a[i]!='\0';i++)
{
	printf("%c",a[i]);
}
printf("\n");
return 0;
}

