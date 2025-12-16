#include<stdio.h>
int main(){
	int num;
	printf("\n enter the num");
	scanf("\n %d",&num);
	
	if(num<=1){
		printf("\n small");
	}
	else if(num<=2){
		printf("\n big");
	}
	else{
		printf("\n biggest");
	}
}
