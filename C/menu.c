#include<stdio.h>
int main(){
	int choice;
	printf(" DESTINY CAFE\nn ");
	printf(" MENU/n ");
	printf("  1.PIZZA\n");
	printf("  2.BURGER\n");
	printf("  3.MOMOS\n");
	printf("  4.EXIT\n");
	printf("ENTER YOUR CHOICE\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("YOU HAVE SELECTED PIZZA/n");
			break;
		case 2:
			printf("YOU HAVE SELECTED BURGER/n");
			break;
		case 3:
			printf("YOU HAVE SELECTED MOMOS /n");
			break;
		case 4:
			printf("EXITING GOODBYE AND TAKE CARE ...... THANK YOU../N");
			break;
		default:
			printf("invalid choice/n");
	}
	return 0;
}
