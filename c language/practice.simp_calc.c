#include <stdio.h>
int main (){
	
	// simple calculator
	
	int a,b;
	printf("\n enter the values of a & b: ");
	scanf("\n %d %d",&a,&b);
	
	printf("\n addition : %d",a+b);
	printf("\n substraction : %d",a-b);
	printf("\n division : %d",a/b);
	printf("\n multiplication : %d",a*b);
	printf("\n modulus : %d",a%b);
	return 0;
}
