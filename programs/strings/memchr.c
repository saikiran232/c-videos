#include <stdio.h>
#include <string.h>
int main()
{
	    char s[] = "saikiran";
	    char *ptr = memchr(s,'r',sizeof(s));
		            if (ptr != NULL)
		                {
		                   //printf ("'c' found at position %d.\n", ptr);
				   printf("Positon = %d\n", (ptr-s)+1);
		                   printf ("search character found:  %s\n", ptr);
		                }
		            else
	                    {
	                    printf ("search character not found\n");
		            }
                           return 0;
}
