#include<stdio.h>
int main(){
	int marks;
	printf("enter the num : ");
	scanf("%d",&marks);
	
	if(marks>=40){
		printf("\n you have passed");
	}else{
		printf("\n you have failed");
	}
}
