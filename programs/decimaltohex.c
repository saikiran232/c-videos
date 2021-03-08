#include<stdio.h>
#include<math.h>
int  dec_to_hexaDecimal(int x);
int main (void)
{
	        int decimal_number,result;
		        printf("Enter Decimal number:\n");
			        scanf("%d",&decimal_number);
				        result=dec_to_hexaDecimal(decimal_number);
					        printf("\nHexa decimal Equivalent\t%d\n",result);
						        return 0;
}
int dec_to_hexaDecimal(int x)
{
	        double hexa_decimalnumber,remainder,count;
		        for (count=0;x>0;count++)
				        {
remainder= x%16;
	hexa_decimalnumber+=remainder * (pow(10,count));
										                x=x/16;

												        }
			        return hexa_decimalnumber;
}

