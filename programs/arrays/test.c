#include <stdio.h>

int
main()
{
	int array[] = {1,2,3,4,5};
	int *ptr;
	ptr = &array;
       for(int i=0;i<5;i++)	
	printf("%p\n", (ptr+i));  //
	return 0;
}

