#include<stdio.h>
#include<stdlib.h>
int main()
{
	     int ch;
	     FILE *fpw;
	     fpw = fopen("C:\\newfile.txt","w");

             if((fpw=fopen("myfile","w")) == NULL)
	     {
	           printf("Error in opening file\n");   
	           exit(1);             
	     }

             printf("Enter any text:\n ");
             while(ch=getchar()!=EOF)
		     fputc(ch,fpw);
	     fclose(fpw);
	     return 0;
}

