#include<stdio.h>
int main(){
	int num , sum=0;
	printf("\n enter the numbers : ");
	scanf("\n %d",&num);
	
	while(num>0){
		sum = sum + (num % 10);// num%10 used to find last digit of num
		num=num/10;//int division removes decimal numbers
	}
	printf("\n sum of digits of a number = %d",sum);
	return 0;
}
