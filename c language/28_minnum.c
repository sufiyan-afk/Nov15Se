#include<stdio.h>
int main(){
	int n , digit , min_num;
	printf("enter the number : ");
	scanf("%d",&n);
	
	min_num = 9;
	
	while(n>0){
		digit = n % 10;// for getting last digit of the num
		if(digit<min_num)
		min_num=digit;//removes last digit of num
		n=n/10;
	}
	printf("minimum digit =%d",min_num);
	return 0;
}
