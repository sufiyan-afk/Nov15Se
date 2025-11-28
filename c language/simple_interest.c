#include <stdio.h>
void main()
{
	int p,r,n;
	printf("\n enter the principle: ");
	scanf("%d",&p);
	
	printf("\n enter the rate : ");
	scanf("%d" ,&r);
	
	printf("\n enter the time : ");
	scanf("%d" ,&n);
	
	printf("\n simple interest : %f",(float)(p*r*n)/100);
}
