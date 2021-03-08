#include<stdio.h>
int main(void)
{

	int i,arr[10]={2,5,6,1,8,9,12,15,23,32};
	int small,large;
	small=large=arr[0];
	for(i=0;i<10;i++)
	{ 
		if(arr[i]<small)
			small=arr[i];
		if(arr[i]>large)
			large=arr[i];
	}
	printf("smallest=%d,largest=%d\n",small,large);
	return 0;
}
