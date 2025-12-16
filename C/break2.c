#include<stdio.h>
int main(){
	int choice ,a , b;
	printf("\n enter two numbers");
	scanf("%d %d",&a,&b);
	
	printf("enter your choice\n");
	printf(" 1.addition\n 2.subtraction \n 3.multiplication");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\nresult=%d",a+b);
			break;
		case 2:
			printf("\nresult=%d",a-b);
			break;
		case 3:
			printf("\n result=%d",a*b);
			break;
		default :
			printf("\n invalid value");
	}
	return 0;
}
