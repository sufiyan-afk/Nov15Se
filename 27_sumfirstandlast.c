#include<stdio.h>
int main(){
	int n , numfirst ,numlast;
	
	printf("\n enter the number : ");
	scanf("\n%d",&n);
	
	numlast = n%10;
	while(n>=10){
		n=n/10;
	}
	numfirst = n;
	printf("\n sum = %d",numfirst+numlast);
	return 0;
}
