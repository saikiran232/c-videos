#include<stdio.h>
int main(void)
{
	int arr1[3] [3],arr2[3] [3], arr3[3] [3] ,sum;
	int i,j,k;
	printf("ENTER THE 1 ST MATRIX IS row-wise:\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		
			printf("\n");
		}
         }
	printf("ENTER THE 2ND MATRIX IS row-wise:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			scanf("%d",&arr2[i][j]);
          		printf("\n");
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		sum=0;
	        for(k=0;k<3;k++)
		{
			sum+=arr1[i][k]*arr2[k][j];
		}
		arr3[i][j]=sum;
		}
         }
	printf("THE RESULTANT OF MATRIX IS:\n");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr3[i][j]);
		        printf("\t");

		}
                  printf("\n\n");
	}
	printf("\n \n");
	return 0;
}
