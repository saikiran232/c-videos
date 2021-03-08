#include<stdio.h>
#include<string.h>
int main()
{
	char str[5][20]={"white","Black","red","yellow","green"};
	int i ,j;
        char temp[20];
	for(i=0;i<5;i++)
	{
		printf("%s    ",str[i]);
	}
	printf("\n");
	 for(i=0;i<5;i++)	  
  	 {
	     for(j=i+1;j<5;j++)
	     {
		     if(strcmp(str[i],str[j])>0)
                      {
	       	       strcpy(temp,str[i]);
		       strcpy(str[i],str[j]);
		       strcpy(str[j],temp);
                       }
              }
          }
	printf("After sorting:\n");
           for(i=0;i<5;i++)
	           {
		     printf("%s    ",str[i]);
                   }
	   
		   return 0;
 }
