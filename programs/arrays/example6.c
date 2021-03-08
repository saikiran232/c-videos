#include<stdio.h>
#define ROW 3
#define COL 3

int main(void)
{

	int arr[ROW][COL],i,j;
        printf("enter [%dx%d]:",ROW,COL);
	for(i=0;i<ROW;i++)
	{
       
		for(j=0;j<COL;j++)
		{
			
			scanf("%d",&arr[i][j]);
			
		}
	}
	printf("printing the elements.........\n");
	for(i=0;i<ROW;i++)
	{
		printf("\n");
		for(j=0;j<COL;j++)
		{
			printf("%d\t",arr[i][j]);
		}

	}
        printf("\n");
	return 0;
}


