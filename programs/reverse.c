#include<stdio.h>
#include<conio.h>
int main(void)
{
	 
        int  num,c=0,rev=0,i=0,temp;
	
		  
	printf("Enter the any number ");
	scanf("%d",&num);
	temp=num;

	while (num>0)
	{
		
		
		rev=rev*10+num%10;
	       if(num%10==0 && i=0) c++; 
	       else i=1;
	           num=num/10;
		

	}
           printf("reverse number is ");
	   for(i=0;i<c;i++){
		   printf("0");
	   }
	   printf("%d",rev);
	   getch();


}


