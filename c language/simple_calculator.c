#include <stdio.h>
void main()
{
	int a,b;
	
	printf("\n enter the values of a & b : ");
	scanf("\%d %d",&a,&b);
	
	printf("\n addition : %d",a+b);
	printf("\n substraction : %d",a-b);
	printf("\n multiplication : %d",a*b);
	printf("\n division : %f",(float)a/b);
	printf("\n modulus : %d",a%b);
	
}
