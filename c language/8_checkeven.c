#include<stdio.h>
int main(){
	
	//input from user
	
	int num;
	printf("enter the num");
	scanf("%d",&num);
	
	//check even or odd
	if(num %2 == 0){
		printf("num is even");
	}
	else{
		printf("num is odd");
	}
}
