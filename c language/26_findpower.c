#include<stdio.h>
int main(){
	int base , exponent , i;
	int result = 1;
	
	printf("\n enter the base : ");
	scanf("%d",&base);
	
	printf("\n enter the exponent : ");
	scanf("%d",&exponent);
	
	for(i=1;i<=exponent ; i++){
		result = result*base;
	}
	printf("result=%d",result);
}
