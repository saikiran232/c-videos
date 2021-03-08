#include <stdio.h>
int i,j,k,m,b;
int main()
{
	int a[9][9]={1,2,3,4,5,6,7,8,9,
		     4,5,6,7,8,9,1,2,3,
		     7,8,9,1,2,3,4,5,6,
		     2,3,4,5,6,7,8,9,1,
		     5,6,7,8,9,1,2,3,4,
		     8,9,1,2,3,4,5,6,7,
		     3,4,5,6,7,8,9,1,2,
		     6,7,8,9,1,2,3,4,5,
		     9,1,2,3,4,5,6,7,8};
	if(row_check(a)==1 && col_check(a)==1 && cube_check(a)==1)
			printf("Success");
			else
			printf("failed");
}

int row_check(int a[9][9])
{
	int c[10]={0};
	for( i=0;i<9;i++)
	{
		for( j=0;j<9;j++)
		{
			c[a[i][j]]++;
		}
		for( k=1;k<=9;k++)
		
			if(c[k]!=1)
			{
				printf("The values %d comes %d timesin%d rows\n",k,c[k],i+1);
				return 0;
			}
			for(k=1;k<=9;k++)
				c[k]=0;
	}
	return 1;
}
int col_check(int a[9][9])
{
      int c[10]={0};
		        for(i=0;i<9;i++)
		        {
			   for( j=0;j<9;j++)
			   {
					   c[a[j][i]]++;
			    }
		        for( k=1;k<=9;k++)
		        if(c[k]!=1)
		        {			 															          printf("The values %d comes %d timesin%d cols\n",k,c[k],i+1);									                         return 0;
			 																                        }
			 for(k=1;k<=9;k++)
		         c[k]=0;
	      	     }
   return 1;
}
int cube_check(int a[9][9])
{
	int c[10]={0}, count=0;
	for(m=0;m<9;m+=3)
	{
		for(b=0;b<9;b+=3)
		{
			for(i=m;i<m+3;i++)
			{
				for(j=b;j<b+3;j++)
				{
					c[a[i][j]]++;
				}
			}
			  count++;
			 for( k=1;k<=9;k++)
				  if(c[k]!=1); 
			           {                                                                                                                                                         printf("The values %d comes %d times in%d box\n",k,c[k],count);                                                                                          return 0;                                                                                                                                           }
			     for(k=1;k<=9;k++)
			     c[k]=0;
	        	}         
      		}
	 return 1;

	}
