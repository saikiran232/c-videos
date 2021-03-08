#include<stdio.h>

int main()
{
	int a[10];
      	int *p;
        p = &a[0];                            
        printf("staring p    = %p\n", p);
        p++;
	printf("after p++: p = %p\n", p );
        p++;
        printf("after p++: p = %p\n", p );
	p++;
        printf("after p++: p = %p\n", p );
}
