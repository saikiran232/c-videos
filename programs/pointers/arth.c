#include<stdio.h>
int main()
{
	int x=25,*pi=&x;
	/*char ch='x',*pc=&ch;
	float c=52.36,*pf=&c;*/
/*	printf("the value of integer %p\n",pi);
        printf("the value of character %p\n",pc);
	printf("the value of float %p\n",pf);*/
	x=++*pi;
        printf("NOW value of integer %p\n",pi);
        printf("NOW value of x %d\n",x);
        x=*pi++;
	printf("NOW value of integer %p\n",pi);
	printf("NOW value of x %d\n",x);
        x=*++pi;
	printf("NOW value of integer %p\n",pi);
	printf("NOW value of x %d\n",x);
        x=(*pi)++;
	printf("NOW value of integer %p\n",pi);
	printf("NOW value of x %d\n",x);
	
       return 0;
}
