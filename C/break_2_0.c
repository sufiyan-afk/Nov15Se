#include<stdio.h>
int main(){
	int choice,a,b;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	
	printf("\n enter your choice");
	printf("1.add\n 2.subt\n 3.multiply\n 4.division\n 5.modulus\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n result=%d",a+b);
			break;
		case 2:
			printf("\n result=%d",a-b);
			break;
		case 3:
			printf("\n result=%d",a*b);
			break;
		case 4:
			printf("\n result=%d",a/b);
			break;
		case 5:
			printf("\n result=%d",a%b);
			break;
		default:
			printf("invalid value\n");
		}
		return 0;
}
