#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("enter any string");
	gets(str);
	printf("string is:");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	printf("Vowel characters are\n");
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' ||str[i]=='o'|| str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			printf(" %c",str[i]);
		}
	}
	printf("\n");
        printf("Consonants characters are \n");
	for(i=0;str[i]!='\0';i++)
        {
	  if(!(str[i]=='a'|| str[i]=='e'|| str[i]=='i' ||str[i]=='o'|| str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
		 {
		         printf(" %c",str[i]);
                 }
        }
         printf("\n");
	 return 0;
}
