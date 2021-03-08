#include <stdio.h>
#include <string.h>

	int main()
	{
          char string[25], reverse_string[25] = {'\0'};
	  int i, length = 0, flag = 0;
	       
	  printf("Enter a string \n");
          fgets(string,25,stdin);
		   for (i = length - 1; i >= 0 ; i--)
		   {
		          reverse_string[length - i - 1] = string[i];
	            }
				    
				   
	                        for (flag = 1, i = 0; i < length ; i++)
			        {
				if (reverse_string[i] != string[i])
				flag = 0;
				}
				     if (flag == 1)
			             printf ("%s is a palindrome\n ", string);
				     else
				     printf("%s is not a palindrome\n", string);
				     return 0;
	}
