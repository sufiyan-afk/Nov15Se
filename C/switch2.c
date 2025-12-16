#include<stdio.h>
int main(){
	int num;
	printf("enter the num");
	scanf("%d",&num);
	
	switch(num){
		case 1:
			printf("\n ADD");
			break;
		case 2:
			printf("\n SUBTRACT");
			break;
		case 3:
			printf("\n multiply");
			break;
	}
}
