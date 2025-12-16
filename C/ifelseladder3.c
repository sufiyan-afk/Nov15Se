#include<stdio.h>
int main(){
	int size;
	printf("enter the size tshirt : ");
	scanf("%d",&size);
	
	if(size==1){
		printf("\n small");
	}
	else if(size==2){
		printf("\n medium");
	}
	else if(size==3){
		printf("\n large");
	}else{
		printf("\n XL");
	}
}
