#include<stdio.h>
int main(){
	int num,i;
	long long factorial = 1;//long long is used because larger no. have very large factorial
	
	printf("\n enter a number : ");
	scanf("\n %d" , &num);
	
	for(i=1;i<=num;i++){
		factorial=factorial*i;
	}
	printf("factorial of %d is %lld",num,factorial);
	return 0;

}
