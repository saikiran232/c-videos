#include<stdio.h>

int compare(const char *str1, const char *str2)
{
	    while (*str1 && *str2)
            {
		   if (*str1 != *str2)
		   return 0;
					 
	     str1++;
	     str2++;
	    }
	     
      return (*str2 == '\0');

}
const char* strstr(const char* str1, const char* str2)
{
	    while (*str1 != '\0')
            {
		    if ((*str1 == *str2) && compare(str1, str2))
		    return str1;
		    str1++;
	     }
      return NULL;
}
int main()
{
	   char *str1 = "saikiran- Handsome boy doing assignment";
	   char *str2 = "some";
		 
	   printf("%s\n", strstr(str1, str2));
		     
           return 0;
}




