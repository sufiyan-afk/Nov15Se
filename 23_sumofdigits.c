#include<stdio.h>
int main(){
	int num , sum=0;
	printf("\n enter the numbers : ");
	scanf("\n %d",&num);
	
	while(num>0){
		sum = sum + (num % 10);
		num=num/10;
	}
	printf("\n sum of digits of a number = %d",sum);
	return 0;
}
